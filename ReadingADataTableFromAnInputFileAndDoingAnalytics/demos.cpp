#include "demos.h"

#include<fstream> 
#include <iostream>
#include <string>



int demoSimpleFileReading()
{
	std::cout << "The contents of the file are:\n";
	//recall: "C://USers/etc is an "absolute" filepath
	std::ifstream inputFileObject("song.txt"); //a "relative" filepath

	if (!inputFileObject)
	{
		std::cout << "FNFE\n";
		return -1; //some arbitrary error code (YOU SHALLL NOTT PASSS!)
	}

	std::string currentLineInTheFile;
	while (std::getline(inputFileObject, currentLineInTheFile, ','))
	{
		std::cout << currentLineInTheFile << "\n";
	}

	return 0; //arbitrary-ish return code to indicate success

}

void demoABunchaCrap()
{
	///*A simple test case of split function:*/
////auto abc = splitRecord("a,b,c", ',');

//auto fields = splitRecord_withStringStream("first field,second field,third field", ',');

//for (const auto& field : fields)
//	std::cout << field << "\n";

//std::system("pause"); 

////Hello, Diego? 

////std::string myStringy; 

////std::string::spli
////myStringy.spli

///*Testing `split` with input file*/
//const std::string filename = "CinderellaPangram-ish.txt";
//std::vector<std::string> fileContents = getFileContents(filename);
//const char delimiter = ',';

//for (const auto& line : fileContents)
//{
//	//auto theSplitRecord = splitRecord(line, delimiter);
//	auto theSplitRecord = splitRecord_withStringStream(line, delimiter);
//	for (const auto& field : theSplitRecord)
//		std::cout << field << "\n";
//}

//std::cout << "\n\nHow'd that look?\n";
}
