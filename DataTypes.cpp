#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");  
	std::cout << "	Название             " << "Размер    Мин и Макс диапазоны\n\n";
	std::cout << "	Bool                 " << sizeof(bool)     << " Байт    " << "True or False\n";
	std::cout << "	Char                 " << sizeof(char)     << " Байт    от " << CHAR_MIN << " до " << CHAR_MAX << endl;
	std::cout << "	Unsigned char        " << sizeof(char)     << " Байт    от 0 до " << UCHAR_MAX << endl;
	std::cout << "	short                " << sizeof(short)    << " Байт    от " << SHRT_MIN << " до " << SHRT_MAX << endl;
	std::cout << "	unsigned short       " << sizeof(short)    << " Байт    от 0 до " << USHRT_MAX << endl;
	std::cout << "	int                  " << sizeof(int)      << " Байт    от " << INT_MIN << " до " << INT_MAX << endl;
	std::cout << "	unsigned int         " << sizeof(int)      << " Байт    от 0 до " << UINT_MAX << endl; 
	std::cout << "	long                 " << sizeof(long)     << " Байт    от " << LONG_MIN << " до " << LONG_MAX << endl;
	std::cout << "	unsigned long        " << sizeof(long)     << " Байт    от 0 до " << ULONG_MAX << endl;
	std::cout << "	long long            " << sizeof(long long)<< " Байт    от " << LLONG_MIN << " до " << LLONG_MAX << endl;
	std::cout << "	unsigned long long   " << sizeof(long long)<< " Байт    от 0 до " << ULLONG_MAX << endl;
	std::cout << "	float                " << sizeof(float)    << " Байт    от " << FLT_MIN << " до " << FLT_MAX << endl;
	std::cout << "	double               " << sizeof(float)    << " Байт    от " << DBL_MIN << " до " << DBL_MAX << endl;
	return 0;	
}