#pragma once
#include <string>

/*Person has 1) age, 2) height, 3) name, 4) workPlace*/
class Person
{
private:
	int age{}; //"brace initiliazer syntax" -> sets int to 0
	double height{}; //0.0
	std::string name{}; //"" (empty string)
	std::string workPlace{}; //empty string also 

public: 
	//add some "setters" and "getters"
	std::string getName(/*no inputs!*/);
	void setName(const std::string& clientSuppliedName); //function declaration (not a def.)
};

