#include <iostream>
#include "Ort.h"

int main()
{
	Ort* ort = new Ort("Stuttgart", 1, 2);

	ort->visit(ort);
}