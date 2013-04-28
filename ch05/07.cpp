//стр.145 
//(*1.5) Определите таблицу, содержащую название месяцев и количество дней в каждом из них. Выведите содержимое таблицы. Проделайте это дважды: первый раз воспользуйтесь массивом символов для имен и массивом целых для дней, а второй раз воспользуйтесь массивом структур, каждая из которых хранит название месяца и количество дней в нем.

#include <iostream>

const char* month_name[] = {
	"January", "February", "March",
	"April", "May", "June",
	"July", "August", "September",
	"October", "November", "December"
};

const int days_in_month[] = {
	31, 28, 31,
	30, 31, 30,
	31, 31, 30,
	31, 30, 31
};

struct month {
	const char* name;
	int days;
};

month mm[] = {
	{month_name[0], days_in_month[0]},
	{month_name[1], days_in_month[1]},
	{month_name[2], days_in_month[2]},
	{month_name[3], days_in_month[3]},
	{month_name[4], days_in_month[4]},
	{month_name[5], days_in_month[5]},
	{month_name[6], days_in_month[6]},
	{month_name[7], days_in_month[7]},
	{month_name[8], days_in_month[8]},
	{month_name[9], days_in_month[9]},
	{month_name[10], days_in_month[10]},
	{month_name[11], days_in_month[11]},
};

int main(int argc, char* argv[])
{
	for(int i = 0; i < sizeof(days_in_month)/sizeof(int); ++i)
		std::cout << month_name[i] << " has " << days_in_month[i] << " days\n";
	std::cout << "\n";
	for(int i = 0; i < sizeof(mm)/sizeof(month); ++i)
		std::cout << mm[i].name << " has " << mm[i].days << " days \n";
	return 0;
}
