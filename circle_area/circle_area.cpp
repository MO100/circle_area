#include <iostream>
#include <cstdlib>
#include "AREA.h"
int main()
{
	Area circle;
	std::cout << "what is the radius of the circle? \n";
	circle.getradius();
	std::cout << "The area of the circle is " << circle.getarea();
	system("pause");
	return 0;
}