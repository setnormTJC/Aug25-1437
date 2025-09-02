// ReadingADataTableFromAnnInputFileAndDoingAnalytics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<fstream>
#include <iostream>
#include <string>

#include"demos.h"
#include"utils.h"

//for now, we'll just read in an input file
//(because 50% or more of the people in this room can't remember how)



int main()
{
	/*A simple test case of split function:*/
	//auto abc = splitRecord("a,b,c", ',');

	auto abc = splitRecord_withStringStream("a,b,c", ',');

	std::cout << "And how about that one?\n";

	//std::system("pause"); 




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

