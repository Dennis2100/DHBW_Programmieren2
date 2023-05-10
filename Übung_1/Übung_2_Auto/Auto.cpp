#include "Auto.h"

Auto::Auto(int verbrauch, std::string name, int gefahreneKilometer)
{
	this->verbrauch = verbrauch;
	this->name = name;
	this->gefahreneKilometer = gefahreneKilometer;
}

int Auto::Drive(int neu_pos_xy)
{
	gefahreneKilometer += neu_pos_xy - ort->getPos();
	return gefahreneKilometer;
}
