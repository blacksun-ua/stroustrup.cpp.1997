//стр.145 
//(*1.5) Какие ограничения на типы указателей char*, int* и void* существуют в вашей системе? Например, может ли int* иметь нечетное значение (подсказка: подумайте о выравнивании)?

#include<iostream>

int f() { return 45; }

int main(int argc, char* argv[])
{
	using std::cout;
	
	char c1 = 'a';
	int i1 = 100, i2 = 300;
	char c2 = 'b';
	char c3[16] = "abcdefghijklmno";
	
	char* pc1 = &c1;
	char* pc2 = &c2;
	int* pi1 = &i1;
	int* pi2 = &i2;
	void* pv = 0;
	
	cout << "address of c1 = " << reinterpret_cast<int*>(&c1) << "\n";
	cout << "address of c2 = " << reinterpret_cast<int*>(&c2) << "\n";
	cout << "address of c3 = " << reinterpret_cast<int*>(&c3) << "\n";
	cout << "address of c3 = " << reinterpret_cast<int*>(c3) << "\n";		// result the same as for &c3
	
	cout << "address of c3_1 = " << reinterpret_cast<int*>(&c3[1]) << "\n";
	cout << "address of c3_2 = " << reinterpret_cast<int*>(&c3[2]) << "\n";
	cout << "address of c3_3 = " << reinterpret_cast<int*>(&c3[3]) << "\n";
	int* pc3_1 = reinterpret_cast<int*>(&c3[1]);
	int* pc3_2 = reinterpret_cast<int*>(&c3[2]);
	int* pc3_3 = reinterpret_cast<int*>(&c3[3]);
	cout << "value of pc3_1 = " << pc3_1 << "\n";
	cout << "value of pc3_2 = " << pc3_2 << "\n";
	cout << "value of pc3_3 = " << pc3_3 << "\n";
	cout << "value of pc3_1 = " << static_cast<char>(*pc3_1) << "\n";
	cout << "value of pc3_2 = " << *pc3_2 << "\n";
	cout << "value of pc3_3 = " << *pc3_3 << "\n";


	cout << "address of i1 = " << pi1 << "\n";
	cout << "address of i2 = " << pi2 << "\n";
	cout << "offset = " << pi1 - pi2 << "\n";
	cout << "aligment = " << ((long)pi2) % 8 << "\n";
	cout << "address pv = " << pv << "\n";
	
	// Вывод: по сути ограничений на типы указателей нет, т.к. их можно приводить друг к другу как угодно, при этом выравнивания не происходит.
	// 
	
	return 0;
}
