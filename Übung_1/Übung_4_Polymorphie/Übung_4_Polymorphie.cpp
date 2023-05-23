#include <iostream>
#include "Ort.h"
#include "Sehenswuerdigkeit.h"

int main()
{
    Ort* ort = new Ort("Stuttgart", 1, 2);
    ort->visit();

    std::cout << "\n";

    Sehenswuerdigkeit* sehenswuerdigkeit = new Sehenswuerdigkeit("Eifelturm", 4, 5, "Man sieht den Eifelturm.");
    sehenswuerdigkeit->visit();
}