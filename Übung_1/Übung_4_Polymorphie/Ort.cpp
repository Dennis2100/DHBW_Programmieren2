#include "Ort.h"

Ort::Ort(std::string name, int x, int y)
{
	this->name = name;
	this->x = x;
	this->y = y;
}

void Ort::visit()
{
	std::cout << name << " " << "(" << x << "," << y << ")";
}
