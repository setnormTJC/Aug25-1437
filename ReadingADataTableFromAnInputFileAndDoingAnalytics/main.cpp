// ReadingADataTableFromAnnInputFileAndDoingAnalytics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<fstream>
#include <iostream>
#include <string>

#include"demos.h"
#include"dndRecord.h"
#include"utils.h"


//for now, we'll just read in an input file
//(because 50% or more of the people in this room can't remember how)


//this code contains lots of "refactoring" of the code I wrote last time 

void printLevelsInDNDRecords(const std::vector<dndRecord>& records)
{
	for (const auto& record : records)
	{
		std::cout << record.level << "\n";
	}
}

int main()
{

	auto dndRecordsAsStrings = getFileContents("sometastydata.csv"); 

	int recordNumber = 0; 

	std::vector<dndRecord> records; 

	for (const auto& record : dndRecordsAsStrings)
	{
		const char delimiter = ','; //only 1 Byte
		auto fields = splitRecord_withStringStream(record, delimiter);
		
		dndRecord currentRecord = 
		{
			std::stoi(fields[0]), 
			fields[1], //etc.
			fields[2], 
			std::stoi(fields[3]), 
			fields[4]
		};

		records.push_back(currentRecord);
	} //end for loop 

	printLevelsInDNDRecords(records); 

}

