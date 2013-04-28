//стр.145 
//(*1) Определите функции f(char), g(char&), h(const char&). Вызовите их с аргументами 'a', 49, 3300, c, uc, sc, где c - char, uc - unsigned char, sc - signed char. Какие вызовы допустимы? При каких вызовах компилятор создаст временные переменные?

#include <iostream>

void f(char c)
{
	std::cout << "f(char c) result = " << c << "\n";
}

void g(char& c)
{
	std::cout << "g(char& c) result = " << c << "\n";
}

void h(const char& c)
{
	std::cout << "h(const char& c) result = " << c << "\n";
}

int main(int argc, char* argv[])
{
	char c = 'a';
	unsigned char uc = 49;
	signed char sc = 3300;	// overflow in implicit constant conversion [-Woverflow]
	
	f(c);		// OK, create temp wariable
	f(uc);		// OK, create temp wariable
	f(sc);		// OK, create temp wariable
	g(c);		// OK
	//g(uc);		// invalid initialization of reference of type ‘char&’ from expression of type ‘unsigned char’
	//g(sc);		// invalid initialization of reference of type ‘char&’ from expression of type ‘signed char’
	h(c);		// OK
	h(uc);		// OK
	h(sc);		// OK
	
	f('a');		// OK, create temp wariable
	f(49);		// OK, create temp wariable
	f(3300);	// overflow in implicit constant conversion [-Woverflow], create temp wariable
	//g('a');		// invalid initialization of non-const reference of type ‘char&’ from an rvalue of type ‘char’
	//g(49);		// invalid initialization of non-const reference of type ‘char&’ from an rvalue of type ‘int’
	//g(3300);	// invalid initialization of non-const reference of type ‘char&’ from an rvalue of type ‘int’
	h('a');		// OK, create temp wariable
	h(49);		// OK, create temp wariable
	h(3300);	// overflow in implicit constant conversion [-Woverflow], create temp wariable
	
	return 0;
}
