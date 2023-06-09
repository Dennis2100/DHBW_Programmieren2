#include "Person.h"

Person::Person(std::string name, Nationalitšt nationalitšt)
{
	this->name = name;
	this->nationalitšt = nationalitšt;
}

void Person::greet(Person &other)
{
	std::cout << greeting(other) << other.getName();
}

std::string Person::getName()
{
	return name;
}

Nationalitšt Person::getNationalitšt()
{
	return nationalitšt;
}

std::string Person::greeting(Person &other)
{
	switch (other.getNationalitšt()) 
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
