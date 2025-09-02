#include "utils.h"
#include <cassert>
#include<fstream> 
#include <iostream>

#include<sstream> 

std::vector<std::string> getFileContents(const std::string& filename)
{
    std::vector<std::string> fileContents; 

    std::ifstream infile(filename);

    if (!infile)
    {
        std::cout << "FNFE\n";
        __debugbreak(); //optional - to draw attention 
        return {}; //the "empty vector" 
    }

    std::string currentLine; 
    while (std::getline(infile, currentLine))
    {
        fileContents.push_back(currentLine);
    }

    return fileContents;
}

std::string mySubstring(const std::string& originalString, const int startIndex, const int finishIndex)
{
    assert(startIndex >= 0 && finishIndex < originalString.size());

    std::string substring{}; //SUBZERO?!! Now, PLAIN zero! 
            //note the use of "brace initialization" 

    substring.reserve(finishIndex - startIndex); //this prevents wasteful "resizing" below
    
    for (int i = startIndex; i < finishIndex; ++i)
        substring.push_back(originalString[i]);
    
    return substring;
}

std::vector<int> getDelimiterLocationsInRecord(const std::string& record, const char delimiter)
{
    std::vector<int> delimiterLocations; 

    for (int i = 0; i < record.size(); ++i)
    {
        if (record[i] == delimiter)
            delimiterLocations.push_back(i); 
    }

    return delimiterLocations;
}

std::vector<std::string> splitRecord(const std::string& record, const char delimiter)
{
    std::vector<int> delimiterLocations = getDelimiterLocationsInRecord(record, delimiter);

    std::vector<std::string> fieldsInRecord; 

    if (delimiterLocations.size() == 0) //the final "row" might not be terminated with delimiter
    {
        fieldsInRecord.push_back(record);
    }

    else
    {
        //push back the first field starting with index 0 (`commaLocations` excludes index 0)
        fieldsInRecord.push_back(mySubstring(record, 0, delimiterLocations[0]));

        //push the remaining fields in a loop 
        for (int i = 1; i < delimiterLocations.size(); ++i)
        {
            std::string currentField =
                mySubstring(record, delimiterLocations[i - 1] + 1, delimiterLocations[i]);

            fieldsInRecord.push_back(currentField);
        }

        //push the LAST field in: 
        std::string lastField = mySubstring(record, delimiterLocations.back() + 1,
            record.size() - 1);

    }
    
    return fieldsInRecord;
}

std::vector<std::string> splitRecord_withStringStream(const std::string& record, char delimiter)
{
    std::vector<std::string> fields;
    std::stringstream ss(record);
    std::string field;

    while (std::getline(ss, field, delimiter))
    {
        fields.push_back(field);
    }

    return fields;
}

