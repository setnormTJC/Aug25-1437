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

//struct 


int main()
{
	auto dndRecords = getFileContents("sometastydata.csv"); 

	for (const auto& record : dndRecords)
	{
		std::cout << record << "\n";
	}

	


}

