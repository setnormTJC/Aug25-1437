// ReadingADataTableFromAnInputFileAndDoingAnalytics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<fstream>
#include <iostream>
#include <string>

//for now, we'll just read in an input file
//(because 50% or more of the people in this room can't remember how)



int main()
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

	






}

