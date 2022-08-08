#include "XYcoordinate.h"
#include <iostream>

int main()
{
	XYCoordinate coordinate;
	int x, y;
	std::cin >> x >> y;
	coordinate.SetterX(x);
	coordinate.SetterY(y);
	coordinate.Print();
	std::cout << coordinate.CalculateDistance();
	
}