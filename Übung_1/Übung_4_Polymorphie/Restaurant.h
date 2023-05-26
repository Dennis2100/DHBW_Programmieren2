#pragma once

#include <stdio.h>
#include <iostream>
#include <string.h>
#include "Ort.h"

class Restaurant : public Ort
{
	std::string essen;

public:
	Restaurant() = default;
	Restaurant(std::string name, int x, int y, std::string essen);

	void visit() override;
};

