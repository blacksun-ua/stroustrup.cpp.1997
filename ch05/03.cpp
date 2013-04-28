//стр.145
//(*1) При помощи typedef опеделите типы unsigned char, const unsigned char, указатель на целое, указатель на указатель на char, указатель на массив char, массив на 7 указателей на целые числа, указатель на массив из 7 указателей на целые числа и массив из 8 массивов на 7 указателей на целые числа

// http://www.kalinin.ru/programming/cpp/17_07_00.shtml - правило "право/лево"

int main(int argc, char* argv[])
{
	typedef unsigned char UC;
	typedef const unsigned char CUC;
	typedef int* pint;
	typedef char** ppchar;
	typedef char (*pachar)[8];
	typedef int* pi[7];
	typedef int* (*ppi)[7];
	typedef int* (*ppi8)[8][7];
	
	UC unsigned_char = 128;
	CUC const_unsigned_char = 220;
	pint pointer_to_int = 0;
	ppchar pointer_to_pointer_to_char = 0;
	char char_array[8];
	pachar pointer_to_char_array = &char_array;
	
	return 0;
}
