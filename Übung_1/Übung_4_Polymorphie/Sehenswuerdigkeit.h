#pragma once

#include <string.h>
#include <iostream>
#include <stdio.h>
#include "Ort.h"

class Sehenswuerdigkeit : public Ort
{
	std::string sehenswuerdigkeit;

public:
	Sehenswuerdigkeit() = default;
	Sehenswuerdigkeit(std::string name, int x, int y, std::string sehenswuerdigkeit);
	~Sehenswuerdigkeit();
	
	void visit() override;
};

