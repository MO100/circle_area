#include <iostream>
#include <cstdlib>
#include "area.h"

void Area:: setradius(double rad)
{
	radius = rad;
}
double Area::getradius() const
{
	return radius;
}
void Area::setarea(double a, double radius)
{
	area = radius * radius * PIE;
	area = a;
}
double Area:: getarea() const
{
	return area;
}