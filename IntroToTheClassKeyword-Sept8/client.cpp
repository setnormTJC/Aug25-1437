// IntroToTheClassKeyword-Sept8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"
#include"demos.h"

int main()
{
	//demoDefaultConstructorCalling(); 

	Person me(37, 69.5, "Sepharoo", "Tjcool");

	me.printAllMemberVariables(); 

}
