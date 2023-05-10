#pragma once
#include <iostream>
#include <stdio.h>
#include <string.h>
#include "Ort.h"

class Auto
{
	Ort *ort = new Ort();

	int verbrauch;
	std::string name;
	int pos_xy;
	int gefahreneKilometer;

public:
	Auto() = default;
	Auto(int verbrauch, std::string name, int gefahreneKilometer);

	int Drive(int neu_pos_xy);
};

