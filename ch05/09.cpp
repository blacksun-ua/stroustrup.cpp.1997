//стр.145 
//(*1.5) Найдите пример, когда имеет смысл воспользоватся именем в его собственном инициализаторе.

#include <iostream>

int main(int argc, char* argv[])
{
	int arr[12] = {sizeof(arr)/1, sizeof(arr)/2, sizeof(arr)/3, sizeof(arr)/4, sizeof(arr)/5, sizeof(arr)/6,
				   sizeof(arr)/7, sizeof(arr)/8, sizeof(arr)/9, sizeof(arr)/10, sizeof(arr)/11, sizeof(arr)/12};
	for(int i = 0; i < sizeof(arr)/sizeof(int); ++i)
		std::cout << "arr[" << i << "] = " << arr[i] << "\n";
	
	return 0;
}
