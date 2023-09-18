#include <iostream>
int main()
{
	unsigned long x;
	short n;
	std::cin >> x >> n;
	x = ~x;
	std::cout << ~(x | (1 << n));
	return 2;
}