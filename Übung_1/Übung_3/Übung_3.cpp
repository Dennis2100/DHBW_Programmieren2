#include <iostream>
#include <string.h>
#include <stdio.h>
#include "Person.h"

int main()
{
    Person *Dennis = new Person("Dennis", de);
    Person *JJB = new Person("JJB", fr);

    Dennis->greet(JJB);

    std::cout << "\n";

    JJB->greet(Dennis);
}

