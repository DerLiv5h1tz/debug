#include "Point.h"
#include <iostream>


int main()
{
	Point p1(1, 2);
	Point p2 = p1;
	//4 part 1 Point::Point(const Point& other) is calling becuasse we move here

	p2 = p2;
	std::cout << "p1=" << p1 << std::endl;
	std::cout << "p2=" << p2 << std::endl;

	return 0;
    
}
