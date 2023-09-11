#include <iostream>
#include <cmath>
using  namespace std;
int main()
{
	float a,b,c,p,s;
	std::cin >> a >> b >> c;
	p = (a + b + c)/2 ;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	std::cout << s << endl;




	
	return 2;
}