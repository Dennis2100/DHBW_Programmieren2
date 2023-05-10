#include <iostream>
#include "Auto.h"
#include "Ort.h"

int main()
{
    int gefahreneKilometer;

    Auto *automobil = new Auto(10, "Toyota", 0);

    gefahreneKilometer = automobil->Drive(200);

    std::cout << "Sie sind " << gefahreneKilometer << "km gefahren.";

    system("PAUSE");
}