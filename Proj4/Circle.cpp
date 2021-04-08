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

void Circle::whatAml()
{
	std::cout << "It is a Circle" << std::endl;
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