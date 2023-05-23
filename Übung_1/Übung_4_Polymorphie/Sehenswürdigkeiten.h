#pragma once

#include "Ort.h"
#include <string.h>
#include <iostream>
#include <stdio.h>

class Sehenswürdigkeiten : public Ort
{
	std::string name;
	int x;
	int y;
	std::string sehenswürdigkeit;

public:
	Sehenswürdigkeiten() = default;
	Sehenswürdigkeiten(std::string name, int x, int y, std::string sehenswürdigkeit):Ort::Ort(name, x, y);

	void visit(Ort *other, std::string sehenswürdigkeit) override;
};

