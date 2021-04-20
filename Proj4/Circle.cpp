#include "Circle.h"
#include <cmath>
#include <typeinfo>
#include <iostream>

Circle::Circle(double radius)
{
	this->radius = radius;
}

double Circle::getRadius()
{
	return radius;
}

void Circle::setRadius(double radius)
{
	this->radius = radius;
}

std::string Circle::whatAml()
{
	return "Circle";
}

double Circle::getCircunference()
{
	const double PI = std::atan(1.0) * 4;
	return 2 * radius * PI;
}

double Circle::getArea()
{
	const double PI = std::atan(1.0) * 4;
	return PI * pow(radius, 2);

}