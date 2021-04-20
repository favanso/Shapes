#ifndef BASICSHAPE_H
#define BASICSHAPE_H
#include <string>

class BasicShape
{
private:
	double area;
 
public:

	virtual std::string whatAml();

	virtual double getArea();

};


#endif 