#ifndef BASICSHAPE_H
#define BASICSHAPE_H
#include <string>

class BasicShape
{
 
protected:

	virtual void whatAml();

	virtual double getArea();

};

class Circle : public BasicShape
{
private:
	double radius;

public:
	Circle(double radius);

	double getRadius();

	void setRadius(double radius);

	double getCircunference(Circle circle);

	void whatAml() override;

	double getArea() override;

};

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

	void whatAml() override;

	double getArea() override;

};

#endif 