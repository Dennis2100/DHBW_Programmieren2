#include "Restaurant.h"

Restaurant::Restaurant(std::string name, int x, int y, std::string essen) : Ort(name, x, y)
{
	this->essen = essen;
}

void Restaurant::visit()
{
	Ort::visit();
	std::cout << ". " << essen;
}
