#include "Sehenswürdigkeiten.h"
#include <string.h>
#include <iostream>
#include <stdio.h>

Sehenswürdigkeiten::Sehenswürdigkeiten(std::string name, int x, int y, std::string sehenswürdigkeit):Ort::Ort(name, x, y)
{
	name = name;
	x = x;
	y = y;
	this->sehenswürdigkeit = sehenswürdigkeit;
}

void Sehenswürdigkeiten::visit(Ort *other, std::string sehenswürdigkeit)
{
	std::cout << name << " " << x << "," << y << ". " << sehenswürdigkeit;
}
