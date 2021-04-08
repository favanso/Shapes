#include "BasicShape.h"
#include <typeinfo>
#include <iostream>
#include <cmath>

void BasicShape::whatAml()
{}

double BasicShape::getArea()
{
	return 0.0;
}

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
	this->radius=radius;
}	

void Circle::whatAml()
{
	std::cout << "It is a Circle" << std::endl;
}

double Circle::getCircunference()
{
	const double PI = std::atan(1.0) * 4;
	return 2*radius*PI;
}

double Circle::getArea() 
{
	const double PI = std::atan(1.0) * 4;
	return PI*pow(radius,2);

}

Rectangle::Rectangle(double lenght, double width)
{
	this->lenght = lenght;
	this->width = width;
}

double Rectangle::getLenght()
{
	return lenght;
}

double Rectangle::getWidth()
{
	return width;
}

void Rectangle::setLenght(double lenght)
{
	this->lenght = lenght;
}

void Rectangle::setWidth(double width)
{
	this->width = width;
}

double Rectangle::getPerimeter()
{
	return 2*lenght+2*width;
}

void Rectangle::whatAml()
{
	std::cout << "It is a Rectangle" << std::endl;
}

double Rectangle::getArea()
{
	return lenght*width;
}

