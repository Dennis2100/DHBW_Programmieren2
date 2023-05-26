#include <iostream>
#include "Ort.h"
#include "Sehenswuerdigkeit.h"
#include "Restaurant.h"

int main()
{
    Ort ort("Stuttgart", 1, 2);
    Sehenswuerdigkeit sehenswuerdigkeit("Eifelturm", 4, 5, "Man sieht den Eifelturm.");
    Restaurant restaurant("D�nerbude", 2, 10, "D�ner");

    Ort* orte[3];

    orte[0] = &ort;
    orte[1] = &sehenswuerdigkeit;
    orte[2] = &restaurant;

    for (int i = 0; i < 3 ; i++) 
    {
        orte[i]->visit();
        std::cout << "\n";
    }
}