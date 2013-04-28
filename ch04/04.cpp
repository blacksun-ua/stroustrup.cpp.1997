//стр.125
//(1.5*) Напишите программу, которая печатает символы от a до z и цифры от 0 до 9 и их целые значения. Проделайте то же самое для других печатаемых символов. Проделайте то же самое, но воспользуйтесь шестнадцатиричным представлением чисел.

#include <iostream>

void do_print(char begin, char end, std::ios_base::fmtflags b = std::ios::dec)
{
	std::ios_base::fmtflags ff = std::cout.flags();
	std::cout.setf(b, std::cout.basefield);
	std::cout.setf(std::cout.showbase);
	
	for(char c = begin; c <= end; ++c)
		if(std::ios::dec == b)
			std::cout << c << " ";
		else
			std::cout << static_cast<int>(c) << " ";
	
	std::cout.flags(ff);
}

int main(int argc, char** argv)
{
	std::ios_base::fmtflags ff = std::ios_base::hex;
	
	do_print(97, 122);
	do_print(48, 57);
	std::cout << "\n";
	do_print(0, 126);
	do_print(128, 255);
	std::cout << "\n\n";
	do_print(97, 122, ff);
	do_print(48, 57, std::ios::hex);
	std::cout << "\n";
	do_print(0, 255, std::cout.hex);
	std::cout << "\n";
}
