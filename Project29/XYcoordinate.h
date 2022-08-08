#pragma once
#include <math.h>
class XYCoordinate
{
	int x;
	int y;
	
public:
	int CalculateDistance();
	void SetterX(int x);
	void SetterY(int y);
	void Print();

};
