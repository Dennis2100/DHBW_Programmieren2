#pragma once

#include <string.h>
#include <iostream>
#include <stdio.h>

class User
{
	std::string name;
	int id;

public:
	static int idx;

	User();
	User(std::string name);

	void Print();
};

