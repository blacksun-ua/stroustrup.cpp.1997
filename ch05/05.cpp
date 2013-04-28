//стр.145 
//(*1.5) Каков размер массива str в следующем примере:
// char str[] = "короткая строка";
// Какова длинна строки "короткая строка"?

#include <iostream>
#include <cstring>

int main(int argc, char* argv[])
{
	char str[] = "короткая строка";
	std::cout << "Size of str = " << sizeof(str) << "\n";			// 30
	std::cout << "Length of str = " << strlen(str) << "\n";			// 29
	// Почему так? Потому что символьные строки всегда заканчиваются нулем.
	return 0;	
}
