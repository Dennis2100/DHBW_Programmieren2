#include "Sehenswuerdigkeit.h"

Sehenswuerdigkeit::Sehenswuerdigkeit(std::string name, int x, int y, std::string sehenswuerdigkeit) : Ort(name, x, y)
{
	this->sehenswuerdigkeit = sehenswuerdigkeit;
}

Sehenswuerdigkeit::~Sehenswuerdigkeit()
{
}

void Sehenswuerdigkeit::visit()
{
	Ort::visit();
	std::cout << ". " << sehenswuerdigkeit;
}
