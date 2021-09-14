
#include <iostream>

int main()
{
	int a, b, c, d;
	a = 7;
	b = 23;
	c = 125;
	d = 14;
	float f = a * (b + (float(c) / d));
	std::cout << std::endl;

	{

		int a, b;
		a = 25;
		b = (a <= 21) ? (21 - a) : 2 * (a - 21);
		std::cout << b << std::endl;
	}
}