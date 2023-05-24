#pragma once

#include <string.h>
#include <stdio.h>
#include <iostream>

class Ort
{
	std::string name;
	int x;
	int y;

public:
	Ort() = default;
	Ort(std::string name, int x, int y);
	~Ort();

	virtual void visit();
};

