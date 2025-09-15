// IntroToTheClassKeyword-Sept8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"

//#include"Person.cpp" //NOT required!

#include"demos.h"
#include <vector>




int main()
{
	//demoDefaultConstructorCalling(); 

	Person me(37, 69.5, "Sepharoo", "Tjcool");

	//me.printAllMemberVariables(); 

	Person you; //this is called "instantiation" of an object of type `Person`
	you.setWorkPlace("some fantastic workplace");


	std::vector<Person> people = { me, you }; //NOTE: Person is a "template parameter"

	//template //we will come back to this guy!
	
	//make a loop to print all people
	for (auto& currentPerson : people) //range-based for loop 
	{
		currentPerson.printPersonAttributes(); 

	}

	//if (me > you) //won't work without "operator overloading" (we'll talk about it later)
	//{
	//	std::cout << "I am greater than you ?!\n";
	//}
}
