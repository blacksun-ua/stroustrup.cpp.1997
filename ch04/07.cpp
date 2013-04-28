//стр.125
//(2*) Нарисуйте граф целых и фундаментальных типов, где от одного типа идет стрелка к другому, если значения первого типа могут быть представлены значениями другого в любой реализации, соответствующей стардарту. Нарисуйте такой граф для типов вашей любимой реализации.

/*
_b|_________________types_____________________
  |
1 |          _______bool_________
  |         |                    |
1 |        char        ______unsigned char                               
  |         |        /           |
  |         |       /            |
2 |       short <--/   _____unsigned short
  |         |         /          |   
  |         |        /           |   
4 |        int   <--/  ______unsigned int                   
  |         |         /          |   
  |         |        /           |   
8 |       long   <--/       unsinged long   
  |         |                    |
  |         |                    |
8 |     long long        unsinged long long
  |                              | 
4 |                            float    
  |                              | 
8 |                            double 
  |                              | 
16|                         long double   
  |                               
*/

// 1 == sizeof(char) <= sizeof(short) <= sizeof(int) <= sizeof(long) <= sizeof(long long)

#include <iostream>

int main(int argc, char* argv[])
{
	std::cout << "char";
	if(sizeof(char) <= sizeof(short)) std::cout << " -> short";
	if(sizeof(short) <= sizeof(int)) std::cout << " -> int";
	if(sizeof(int) <= sizeof(long)) std::cout <<" -> long";
	std::cout << "\n";
	
	std::cout << "float";
	if(sizeof(float) <= sizeof(double)) std::cout << " -> double";
	if(sizeof(double) <= sizeof(long double)) std::cout << " -> long double";
	std::cout << "\n";
	
	std::cout << "bool";
	if(sizeof(bool) <= sizeof(int)) std::cout << " -> int";
	if(sizeof(int) <= sizeof(long)) std::cout << " -> long";
	if(sizeof(long) <= sizeof(float)) std::cout << " -> float";
	if(sizeof(double) <= sizeof(double)) std::cout <<" -> double";
	std::cout << std::endl;
	
	return 0;
}
