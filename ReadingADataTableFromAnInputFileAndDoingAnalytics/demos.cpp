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
