#include "math_utils.h"

namespace utilz
{
	double area(double length, double width) //rectangle
	{
		return length * width;
	}

	double area(double length) //square
	{
		return length * length;
	}

	double area(Rectangle rectangle)
	{
		return rectangle.length * rectangle.width;
	}

	double power(double base, int exponent)
	{
		double total = 1;

		for (int i = 0; i < exponent; i++)
		{
			total = total * base;
		}

		return total;
	}
}