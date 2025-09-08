#include "Person.h"
#include <iostream>

//careful - don't do this:
//void setName(const std::string& clientSuppliedName)
//{
//
//}

void Person::setName(const std::string& clientSuppliedName)
{
	if (clientSuppliedName.length() < 20)
	{
		Person::name = clientSuppliedName; 
	}

	else
	{
		std::cout << "The name " << clientSuppliedName << " is too long, bro.\n";
	}
}

std::string Person::getName()
{
	return name; //Person::name is also fine here
}
