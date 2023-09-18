#include <iostream>



int main()
{
	unsigned long x;
	short n;
	std::cin >> x >> n;
	x |= (1 << n); // допустим у нас       0x0001
	std::cout << x; // мы операцию или с   0x0010 и получаем 0x0011  
	return 2; //                и получаем 0x0011
}