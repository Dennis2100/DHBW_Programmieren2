#include "Person.h"

Person::Person(std::string name, Nationalit�t nationalit�t)
{
	this->name = name;
	this->nationalit�t = nationalit�t;
}

void Person::greet(Person* other)
{
	std::cout << greeting(other) << other->getName();
}

std::string Person::getName()
{
	return name;
}

Nationalit�t Person::getNationalit�t()
{
	return nationalit�t;
}

std::string Person::greeting(Person *other)
{
	switch (other->getNationalit�t()) 
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
