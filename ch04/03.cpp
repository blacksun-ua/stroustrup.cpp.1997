//стр.125
//(1.5*) Напишите программу, которая печатает размеры фундаментальных типов, нескольких типов указателей и нескольких перечислений по вашему выбору. Воспользуйтесь оператором sizeof()

#include <iostream>

class A { int a, b, c ;};
enum season { spring, summer, fall, winter };
enum color { white, black, green, gray, yellow, blue, red, brown, pink, orange };

char* pc;
int* pi;
void* pv;
season* pe;
const char* ps = "juast const char* string";
A* pa;

int main(int argc, char* argv[])
{
	std::cout << "\nsize of bool\t\t\t" << sizeof(bool);
	std::cout << "\nsize of char\t\t\t" << sizeof(char);
	std::cout << "\nsize of signed char\t\t" << sizeof(signed char);
	std::cout << "\nsize of unsigned char\t\t" << sizeof(unsigned char);
	std::cout << "\nsize of wchar_t\t\t\t" << sizeof(wchar_t);
	std::cout << "\nsize of char16_t\t\t" << sizeof(char16_t);	// C++11
	std::cout << "\nsize of char32_t\t\t" << sizeof(char32_t);	// C++11
	std::cout << "\nsize of short\t\t\t" << sizeof(short);
	std::cout << "\nsize of unsigned short\t\t" << sizeof(unsigned short);
	std::cout << "\nsize of int\t\t\t" << sizeof(int);
	std::cout << "\nsize of unsigned int\t\t" << sizeof(unsigned int);
	std::cout << "\nsize of long\t\t\t" << sizeof(long);
	std::cout << "\nsize of unsigned long\t\t" << sizeof(unsigned long);
	std::cout << "\nsize of long long\t\t" << sizeof(long long);
	std::cout << "\nsize of unsigned ll\t\t" << sizeof(unsigned long long);
	std::cout << "\nsize of float\t\t\t" << sizeof(float);
	std::cout << "\nsize of double\t\t\t" << sizeof(double);
	std::cout << "\nsize of long double\t\t" << sizeof(long double);
	std::cout << "\nsize of void\t\t\t" << sizeof(void);	//  warning: invalid application of ‘sizeof’ to a void type [-Wpointer-arith]
	// выше - фундаментальные типы С++
	
	std::cout << "\nsize of void*\t\t\t" << sizeof(void*);
	std::cout << "\nsize of pointer to char\t\t" << sizeof(pc);
	std::cout << "\nsize of pointer to int\t\t" << sizeof(pi);
	std::cout << "\nsize of pointer to void\t\t" << sizeof(pv);
	std::cout << "\nsize of pointer to season\t" << sizeof(pe);
	std::cout << "\nsize of pointer to class A\t" << sizeof(pa);
	std::cout << "\nsize of pointer const char*\t" << sizeof(ps);
	std::cout << "\nsize of enum season\t\t" << sizeof(season);
	std::cout << "\nsize of enum color\t\t" << sizeof(color);
	std::cout << "\n\n";
	return 0;
}
