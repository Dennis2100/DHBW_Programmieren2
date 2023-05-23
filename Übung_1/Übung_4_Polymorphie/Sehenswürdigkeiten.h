#pragma once

#include "Ort.h"
#include <string.h>
#include <iostream>
#include <stdio.h>

class Sehensw�rdigkeiten : public Ort
{
	std::string name;
	int x;
	int y;
	std::string sehensw�rdigkeit;

public:
	Sehensw�rdigkeiten() = default;
	Sehensw�rdigkeiten(std::string name, int x, int y, std::string sehensw�rdigkeit):Ort::Ort(name, x, y);

	void visit(Ort *other, std::string sehensw�rdigkeit) override;
};

