#include <iostream>
#include "Ort.h"
#include "Sehenswuerdigkeit.h"

int main()
{
    Ort ort("Stuttgart", 1, 2);
    ort.visit();

    std::cout << "\n";

    Sehenswuerdigkeit sehenswuerdigkeit("Eifelturm", 4, 5, "Man sieht den Eifelturm.");
    sehenswuerdigkeit.visit();
}