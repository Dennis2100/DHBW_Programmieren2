#include "Sehensw�rdigkeiten.h"
#include <string.h>
#include <iostream>
#include <stdio.h>

Sehensw�rdigkeiten::Sehensw�rdigkeiten(std::string name, int x, int y, std::string sehensw�rdigkeit):Ort::Ort(name, x, y)
{
	name = name;
	x = x;
	y = y;
	this->sehensw�rdigkeit = sehensw�rdigkeit;
}

void Sehensw�rdigkeiten::visit(Ort *other, std::string sehensw�rdigkeit)
{
	std::cout << name << " " << x << "," << y << ". " << sehensw�rdigkeit;
}
