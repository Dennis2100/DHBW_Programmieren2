#include <iostream>
#include "User.h"

int User::idx = 0;

int main()
{
    User b1("Dennis");
    User b2("JJB");
    User b3;
    
    User b[3];

    b[0] = b1;
    b[1] = b2;
    b[2] = b3;

    for (int i = 0; i < 3; i++)
    {
        b[i].Print();
        std::cout << "\n";
    }
}
