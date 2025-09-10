#include "demos.h"
#include "Person.h"
#include <iostream>

void demoDefaultConstructorCalling()
{
	Person you;// = Person(); //what's my name here (say my name!) 

	std::cout << "Your name is initially: " << you.getName() << "\n";
	//you.name = { 37, 69.5, "Seth", "TJCool" };

	//you.name = "Seth"; 
	//string name = asdfas
	you.setName("jghjkcsvkjfdsagkjdasfkjldasfjkldafsjklhdasfjklhdasfjlkh2132633473838338");
	you.setName("Yousa (Jar Jar Binks reference)");

	std::cout << you.getName() << "\n";

}
