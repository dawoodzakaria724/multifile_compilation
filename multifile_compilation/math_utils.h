#ifndef MATH_UTILS
#define MATH_UTILS

struct Rectangle
{
	double length;
	double width;
};

namespace utilz
{

	double area(double length, double width);

	double area(double length);

	double area(Rectangle rectangle);

	double power(double base, int exponent = 2);
}
#endif