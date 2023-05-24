#include <iostream>
#include <string.h>
#include <stdio.h>
#include "Person.h"

int main()
{
    Person Dennis("Dennis", de);
    Person JJB("JJB", fr);

    Dennis.greet(JJB);

    std::cout << "\n";

    JJB.greet(Dennis);
}

