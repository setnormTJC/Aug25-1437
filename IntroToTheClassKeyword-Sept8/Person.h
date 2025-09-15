#pragma once
#include <string>

/*Person has 1) age, 2) height, 3) name, 4) workPlace*/
class Person
{

private:
	int age{}; //"brace initiliazer syntax" -> sets int to 0
	double height{}; //0.0
	std::string m_name{}; //"" (empty string)
	std::string workPlace{}; //empty string also 

public: 
	//add some "setters" and "getters"
	std::string getName() const;

	/*This function sets the name! Surprise!
	*@param clientSuppliedName -> cannot have more than 20 chars
	(expand validation checks by disallowing numbers in a refactored version of this function).
	*/
	void setName(const std::string& clientSuppliedName); //function declaration (not a def.)


	void setWorkPlace(const std::string& clientSuppliedWorkplace)
	{
		workPlace = clientSuppliedWorkplace;
	}


	/*This is called a DEFAULT constructor (default constructors have ZERO args.*/
	Person()/* = delete -> optional*/; 
	Person(int age, double height, const std::string& name, const std::string workPlace);

	void printPersonAttributes(); 

private: 
	void thisIsAPrivateFunction(); 
};

