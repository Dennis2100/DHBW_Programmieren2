#include "Person.h"

Person::Person(std::string name, Nationalität nationalität)
{
	this->name = name;
	this->nationalität = nationalität;
}

void Person::greet(Person* other)
{
	std::cout << greeting(other) << other->getName();
}

std::string Person::getName()
{
	return name;
}

Nationalität Person::getNationalität()
{
	return nationalität;
}

std::string Person::greeting(Person *other)
{
	switch (other->getNationalität()) 
	{
		case de:
			return "Hallo, ";
			break;

		case it:
			return "Ciao, ";
			break;

		case fr:
			return "Bonjour, ";
			break;

		case en:
			return "Hello, ";
			break;
	}
}
