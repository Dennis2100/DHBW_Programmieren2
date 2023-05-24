#pragma once
#include <string.h>
#include <stdio.h>
#include <iostream>

enum Nationalit�t {de, it, fr, en};

class Person
{
	std::string name;
	Nationalit�t nationalit�t;

public:
	Person() = default;
	Person(std::string name, Nationalit�t nationalit�t);

	void greet(Person &other);
	std::string getName();
	Nationalit�t getNationalit�t();
	std::string greeting(Person &other);
};

