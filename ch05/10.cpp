//стр.145 
//(*1) Определите массив строк, в кором строки содержат названия месяцев. Распечатайте эти строки. Передайте массив в функцию, которая печатает строки.

#include <iostream>

void print_months_arr(int num, const char months[][10])
{
	for(int i = 0; i < num; ++i)
		std::cout << months[i] << (i < num-1 ? ", " : "\n");
}

void print_months(int num, const char* months[])
{
	for(int i = 0; i < num; ++i)
		std::cout << months[i] << (i < num-1 ? ", " : "\n");
}

int main(int argc, char* argv[])
{
	const int ms = 12;
	const char* months[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	char months_arr[][10] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	print_months(ms, months);
	print_months_arr(ms, months_arr);
	return 0;
}
