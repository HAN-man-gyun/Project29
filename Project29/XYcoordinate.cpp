#include "XYcoordinate.h"
#include <iostream>

int XYCoordinate::CalculateDistance()
{
	return  sqrt((x * x) + (y * y));
}
void XYCoordinate::SetterX(int x)
{
	XYCoordinate::x = x;
}
void XYCoordinate::SetterY(int y)
{
	XYCoordinate::y = y;
}
void XYCoordinate::Print()
{
	std::cout << x << " " << y << std::endl;
}