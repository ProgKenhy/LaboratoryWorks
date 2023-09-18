#include <iostream>
#include <cmath>
int main()
{
	unsigned short a, b, c;
	float p;
	std::cin >> a >> b >> c;
	p = sqrt(a * a + b * b + c * c);
	std::cout << p << std::endl;
	return 2;
}