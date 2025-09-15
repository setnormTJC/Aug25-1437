#include "Person.h"
#include <iostream>
#include<iomanip>


//careful - don't do this:
//void setName(const std::string& clientSuppliedName)
//{
//
//}

Person::Person()
{
	std::cout << "Default constructor of `Person` class got called\n";
	age = -99; 
}

Person::Person(int age, double height, const std::string& name, const std::string workPlace)
	:
	age(age), height(height), m_name(name), workPlace(workPlace)
{
	////"stub"
	//Person::age = age; 
	//Person::height = height; 
	////so on
	//THIS was the "old school" way of defining a "parameterized constructor" 
}

void Person::printPersonAttributes() 
{
	//setwidth to FOUR (because some folks (lucky?) get to be centenarians) -> more than 2 digits in their age)
	std::cout << std::left << std::setw(4) << Person::age;
	std::cout << std::left << std::setw(4) << Person::height;
	std::cout << std::left << std::setw(20) << Person::m_name;
	std::cout << std::left << std::setw(30) << Person::workPlace;
	std::cout << "\n";

}

void Person::setName(const std::string& clientSuppliedName)
{
	if (clientSuppliedName.length() < 40)
	{
		Person::m_name = clientSuppliedName; 
	}

	else
	{
		std::cout << "The name " << clientSuppliedName << " is too long, bro.\n";
	}
}

std::string Person::getName() const 
{
	return m_name; //Person::name is also fine here
}