#include "Rectangle.h"
#include <cmath>
#include <typeinfo>
#include <iostream>

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
	return 2 * lenght + 2 * width;
}

std::string Rectangle::whatAml()
{
	return "Rectangle";
}

double Rectangle::getArea()
{
	return lenght * width;
}