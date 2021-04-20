#include <iostream>
#include "BasicShape.h"
#include "Circle.h"
#include "Rectangle.h"
#include <vector>


using namespace std;

int main() {

	vector<BasicShape*> myVector;

	for (double i = 0; i < 3; i++)
	{
		int random;
		random = rand() % 10;
		BasicShape* basicPtr= new Rectangle(random, random);
		BasicShape* basicPtr2 = new Circle(random);

		myVector.push_back(basicPtr);
		myVector.push_back(basicPtr2);
	}

	int size = myVector.size();

	/*cout << size << endl
	* 
	cout << myVector.at(1) << endl;*/

	for (int i = 0; i < size; i++) {
		
	
		cout << "The "  << myVector[i]->whatAml()<< " "<< i+1 << " has area of: " << myVector[i]->getArea() << endl;
		


		delete myVector[i];
	}

	return 0;
}
