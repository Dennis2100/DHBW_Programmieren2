#pragma once
#include <iostream>
#include <stdio.h>
#include <string.h>

class Ort
{
	int pos_xy;
	std::string name;

public:
	Ort() = default;
	Ort(int pos_xy, std::string name);

	int getPos();
};

