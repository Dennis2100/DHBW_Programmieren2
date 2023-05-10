#include "Ort.h"

Ort::Ort(int pos_xy, std::string name)
{
	this->pos_xy = pos_xy;
	this->name = name;
}

int Ort::getPos()
{
	return pos_xy;
}
