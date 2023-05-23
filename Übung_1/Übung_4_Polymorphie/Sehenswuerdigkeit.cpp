#include "Sehenswuerdigkeit.h"

Sehenswuerdigkeit::Sehenswuerdigkeit(std::string name, int x, int y, std::string sehenswuerdigkeit) : Ort(name, x, y)
{
	this->name = name;
	this->x = x;
	this->y = y;
	this->sehenswuerdigkeit = sehenswuerdigkeit;
}

void Sehenswuerdigkeit::visit()
{
	std::cout << name << " " << "(" << x << "," << y << ")" << ". " << sehenswuerdigkeit;
}
