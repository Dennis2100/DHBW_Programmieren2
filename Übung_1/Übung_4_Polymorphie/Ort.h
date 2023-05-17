#pragma once

#include <string.h>
#include <iostream>
#include <stdio.h>

class Ort
{
	std::string name;
	int x;
	int y;

public:
	Ort() = default;
	Ort(std::string name, int x, int y);

	void visit(Ort *other);
};

