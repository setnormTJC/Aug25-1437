// ReadingADataTableFromAnnInputFileAndDoingAnalytics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<fstream>
#include <iostream>
#include <string>

#include"demos.h"
#include"utils.h"

//for now, we'll just read in an input file
//(because 50% or more of the people in this room can't remember how)


//this code contains lots of "refactoring" of the code I wrote last time 

int main()
{
	/*A simple test case of split function:*/
	//auto abc = splitRecord("a,b,c", ',');

	auto fields = splitRecord_withStringStream("first field,second field,third field", ',');

	for (const auto& field : fields)
		std::cout << field << "\n";

	std::system("pause"); 

	//Hello, Diego? 

	//std::string myStringy; 

	//std::string::spli
	//myStringy.spli

	/*Testing `split` with input file*/
	const std::string filename = "CinderellaPangram-ish.txt";
	std::vector<std::string> fileContents = getFileContents(filename);
	const char delimiter = ',';

	for (const auto& line : fileContents)
	{
		//auto theSplitRecord = splitRecord(line, delimiter);
		auto theSplitRecord = splitRecord_withStringStream(line, delimiter);
		for (const auto& field : theSplitRecord)
			std::cout << field << "\n";
	}

	std::cout << "\n\nHow'd that look?\n";


}

