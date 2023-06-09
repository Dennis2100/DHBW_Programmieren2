#pragma once
#include <string.h>
#include <stdio.h>
#include <iostream>

enum Nationalitšt {de, it, fr, en};

class Person
{
	std::string name;
	Nationalitšt nationalitšt;

public:
	Person() = default;
	Person(std::string name, Nationalitšt nationalitšt);

	void greet(Person &other);
	std::string getName();
	Nationalitšt getNationalitšt();
	std::string greeting(Person &other);
};

