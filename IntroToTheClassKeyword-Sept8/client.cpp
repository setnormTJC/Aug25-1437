// IntroToTheClassKeyword-Sept8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"

int main()
{
	Person you; //what's my name here (say my name!) 

	std::cout << "Your name is initially: " << you.getName() << "\n";
	//you.name = { 37, 69.5, "Seth", "TJCool" };

	//you.name = "Seth"; 

	you.setName("jghjkcsvkjfdsagkjdasfkjldasfjkldafsjklhdasfjklhdasfjlkh2132633473838338");
}
