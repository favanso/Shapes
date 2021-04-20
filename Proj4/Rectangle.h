#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <string>
#include "BasicShape.h"

class Rectangle : public BasicShape
{
private:
	double lenght;
	double width;

public:
	Rectangle(double lenght, double width);

	double getLenght();

	double getWidth();

	void setLenght(double lenght);

	void setWidth(double width);

	double getPerimeter();

	virtual void whatAml() override;

	virtual double getArea() override;

};

#endif 