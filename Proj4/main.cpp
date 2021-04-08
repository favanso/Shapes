#include <iostream>
#include "BasicShape.h"
#include <vector>


using namespace std;

int main() {

	vector<BasicShape*> myVector;

	for (double i = 0; i < 10; i++)
	{
		int random;
		random = rand() % 10;
		BasicShape* basicPtr= new Rectangle(random, random);
		BasicShape* basicPtr2 = new Circle(random);

		myVector.push_back(basicPtr);
		myVector.push_back(basicPtr2);
	}

	int size = myVector.size();
	for (int i = 0; i < size; i++) {

		myVector[i]->whatAmI();
		myVector[i]->getArea();


		delete myVector[i];
	}


	/*In the main file, you should dynamically create the instances of the Rectanglesand Circles, storing pointers to
		the objects into the vector<BasicShape*>.When you test it out in main, loop through the vector, and print out
		the type of class (using the whatAmI) as well as the area, using getArea.You should get the correct values,
		based on the type of object at each position within the area.
		Also, when done, do not forget to delete the objects as well as clear the vector.*/



	return 0;
}
