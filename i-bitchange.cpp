#include <iostream>



int main()
{
	unsigned long x;
	short n;
	std::cin >> x >> n;
	x |= (1 << n); // �������� � ���       0x0001
	std::cout << x; // �� �������� ��� �   0x0010 � �������� 0x0011  
	return 2; //                � �������� 0x0011
}