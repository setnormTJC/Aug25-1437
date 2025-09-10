#include<iostream> 
//#include<string> 
#include <vector>
#include <string>

//#include"Person.h"

struct Person //this is OOP (object-oriented programming) 
{
	int age{}; //modern C++ style

	float height{}; //inches

	std::string m_name{};// = ""; //empty string 

	//padding can optimize (minimize) the amount of space that a struct object takes up in RAM

};

Person makePerson()
{
	Person person; 
	int inputAge; 
	float inputHeight; 
	std::string inputName; 

	std::cout << "Enter the name first\n";
	std::getline(std::cin, inputName);
	std::cout << "Your entered name is (was?): " << inputName << "\n"; //echoing for validation


	std::cout << "Now enter the age:\n";
	std::cin >> inputAge;
	std::cout << "You entered the age: \t" << inputAge << "\n";


	std::cout << "And finally the height is?\n"; 
	std::cin >> inputHeight; 
	std::cout << "You entered the height:\t" << inputHeight << "\n";

	person = { inputAge, inputHeight, inputName };


	return person; 
}
//00101 & 10101 -> bitwise AND operator (Bolin's) 

int main()
{
	Person me = makePerson();
	Person thee = { 19, 77.1, "Jacob"};

	//5 + 2

	std::cout << me.age << "\t" << me.m_name << "\t" << me.height << "\n";

	std::cout << "The OTHER person's deets: "
		<< thee.m_name << "\t" << thee.age << "\t" << thee.height << "\n";

	//an alternative approach to storing those names and ages
	std::vector<std::string> names = { "Seth", "Jacob" };
	std::vector<int> ages = { 37, 19 };





	return 0; 
}

