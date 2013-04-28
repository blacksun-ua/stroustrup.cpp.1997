//стр.145
//(*1) Напишите функцию, которая обменивает значения двух целых чисел. В качестве типа аргумента воспользуйтесь int*. Напишите аналогичную функцию с аргументом типа int&.

#include <iostream>
#include <limits>

void swap_by_ptr(int* a, int* b)
{
	int tmp = *b;
	*b = *a;
	*a = tmp;
}

void swap_by_ref(int& a, int& b)
{
	int tmp = b;
	b = a;
	a = tmp;
}

// альтернативные функции (без временной переменной)
void alt_swap_by_ptr(int* a, int* b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void alt_swap_by_ref(int& a, int& b)
{
	a = (int)(a + b);
	b = (int)(a - b);
	a = (int)(a - b);
}

void alt_swap_by_ref2(int& a, int&b)
{
	a ^= b;
	b ^= a;
	a ^= b;
}

void alt_swap_by_ref3(double& a, double&b)
{
	a += b;
	b = a - b;
	a -= b;
}

int main(int argc, char* argv[])
{
	int a = 100, b = 200;
	std::cout << "a = " << a << ", b = " << b << "\n";
	swap_by_ptr(&a, &b);
	std::cout << "a = " << a << ", b = " << b << "\n";
	swap_by_ref(a, b);
	std::cout << "a = " << a << ", b = " << b << "\n";
	
	a = 123, b = 321;
	std::cout << "Alternative swap:\n";
	std::cout << "a = " << a << ", b = " << b << "\n";
	alt_swap_by_ptr(&a, &b);
	std::cout << "a = " << a << ", b = " << b << "\n";
	alt_swap_by_ref(a, b);
	std::cout << "a = " << a << ", b = " << b << "\n";

	std::cout << "Alternative swap 2:\n";
	std::cout << "a = " << a << ", b = " << b << "\n";
	alt_swap_by_ref2(a, b);
	std::cout << "a = " << a << ", b = " << b << "\n";
	
	std::cout << "Alternative swap 3:\n";
	double a1 = 1.23430903953040329, b1 = 66.340984643876423762;
	std::cout << "a1 = " << a1 << ", b1 = " << b1 << "\n";
	alt_swap_by_ref3(a1, b1);
	std::cout << "a1 = " << a1 << ", b1 = " << b1 << "\n";

	a = std::numeric_limits<int>::max() * 2 + 3, b = std::numeric_limits<int>::max() - 1;
	std::cout << "Alternative swap, overflow:\n";
	std::cout << "a = " << a << ", b = " << b << "\n";
	alt_swap_by_ptr(&a, &b);
	std::cout << "a = " << a << ", b = " << b << "\n";
	alt_swap_by_ref(a, b);
	std::cout << "a = " << a << ", b = " << b << "\n";
	
	return 0;
}
