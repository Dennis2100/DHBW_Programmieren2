#pragma once
#include <string.h>
#include <stdio.h>
#include <iostream>

enum Nationalität {de, it, fr, en};

class Person
{
	std::string name;
	Nationalität nationalität;

public:
	Person() = default;
	Person(std::string name, Nationalität nationalität);

	void greet(Person &other);
	std::string getName();
	Nationalität getNationalität();
	std::string greeting(Person &other);
};

