#ifndef CIRCLE_H
#define CIRCLE_H
#include <string>
#include "BasicShape.h"

class Circle : public BasicShape
{
private:
	double radius;

public:
	Circle(double radius);

	double getRadius();

	void setRadius(double radius);

	double getCircunference();

	void whatAml() override;

	double getArea() override;

};



#endif 