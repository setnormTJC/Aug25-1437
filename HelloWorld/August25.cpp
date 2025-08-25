#include<iostream> 

#include<string> 

//#include"Person.h"

struct Person
{
	std::string name; 

	int age; 

	float height; //inches

};


int main()
{
	Person me = { "Seth", 37, 69.5 };

	std::cout << me.age << "\t" << me.name << "\t" << me.height << "\n";

	//return 0; 
}

