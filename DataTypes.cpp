#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");  
	std::cout << "	��������             " << "������    ��� � ���� ���������\n\n";
	std::cout << "	Bool                 " << sizeof(bool)     << " ����    " << "True or False\n";
	std::cout << "	Char                 " << sizeof(char)     << " ����    �� " << CHAR_MIN << " �� " << CHAR_MAX << endl;
	std::cout << "	Unsigned char        " << sizeof(char)     << " ����    �� 0 �� " << UCHAR_MAX << endl;
	std::cout << "	short                " << sizeof(short)    << " ����    �� " << SHRT_MIN << " �� " << SHRT_MAX << endl;
	std::cout << "	unsigned short       " << sizeof(short)    << " ����    �� 0 �� " << USHRT_MAX << endl;
	std::cout << "	int                  " << sizeof(int)      << " ����    �� " << INT_MIN << " �� " << INT_MAX << endl;
	std::cout << "	unsigned int         " << sizeof(int)      << " ����    �� 0 �� " << UINT_MAX << endl; 
	std::cout << "	long                 " << sizeof(long)     << " ����    �� " << LONG_MIN << " �� " << LONG_MAX << endl;
	std::cout << "	unsigned long        " << sizeof(long)     << " ����    �� 0 �� " << ULONG_MAX << endl;
	std::cout << "	long long            " << sizeof(long long)<< " ����    �� " << LLONG_MIN << " �� " << LLONG_MAX << endl;
	std::cout << "	unsigned long long   " << sizeof(long long)<< " ����    �� 0 �� " << ULLONG_MAX << endl;
	std::cout << "	float                " << sizeof(float)    << " ����    �� " << FLT_MIN << " �� " << FLT_MAX << endl;
	std::cout << "	double               " << sizeof(float)    << " ����    �� " << DBL_MIN << " �� " << DBL_MAX << endl;
	return 0;	
}