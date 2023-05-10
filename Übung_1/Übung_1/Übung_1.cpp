#include <iostream>
#include <stdio.h>
#include <string.h>
#include <random>

enum Geschlecht { m, w };

struct Mitarbeiter
{
    std::string name;
    int gewicht;
    Geschlecht geschlecht;
    int id;
};

int main()
{
    /*int a = 5;
    std::cout << "Hallo " << a << std::endl;*/

    Mitarbeiter m1;
    m1.gewicht = 100;
    m1.id = 210000;
    m1.name = "BOB";
    m1.geschlecht = m;

    for (int i = 0; i < 5; i++)
    {
        switch (m1.geschlecht)
        {
            case m: std::cout << "Herr ";
                break;

            case w: std::cout << "Frau ";
                break;
        }

        std::cout << m1.name << ", " << m1.id << ", " << m1.gewicht << "kg" << "\n";
    }


    system("PAUSE");
}

