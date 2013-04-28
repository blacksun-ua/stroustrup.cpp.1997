//стр.125
//(2*) Каковы в вашей системе минимальные и максимальные значения переменных следующих типов: char, short, int, long, float, double, long double и unsigned?

#include <iostream>
#include <limits>

int main(int argc, char* argv[])
{
	using namespace std;
	cout << "min bool value = " << std::numeric_limits<bool>::min() << "\n";
	cout << "max bool value = " << std::numeric_limits<bool>::max() << "\n";
	
	cout << "min char value = " << std::numeric_limits<char>::min() << " (" << static_cast<int>(std::numeric_limits<char>::min()) << ")\n";
	cout << "max char value = " << std::numeric_limits<char>::max() << " (" << static_cast<int>(std::numeric_limits<char>::max()) << ")\n";

	cout << "min short value = " << std::numeric_limits<short>::min() << "\n";
	cout << "max short value = " << std::numeric_limits<short>::max() << "\n";
	
	cout << "min int value = " << std::numeric_limits<int>::min() << "\n";
	cout << "max int value = " << std::numeric_limits<int>::max() << "\n";
	
	cout << "min long value = " << std::numeric_limits<long>::min() << "\n";
	cout << "max long value = " << std::numeric_limits<long>::max() << "\n";
	
	cout << "min float value = " << std::numeric_limits<float>::min() << "\n";
	cout << "max float value = " << std::numeric_limits<float>::max() << "\n";
	
	cout << "min double value = " << std::numeric_limits<double>::min() << "\n";
	cout << "max double value = " << std::numeric_limits<double>::max() << "\n";
	
	cout << "min long double value = " << std::numeric_limits<long double>::min() << "\n";
	cout << "max long double value = " << std::numeric_limits<long double>::max() << "\n";
	
	cout << "min unsigned value = " << std::numeric_limits<unsigned>::min() << "\n";
	cout << "max unsigned value = " << std::numeric_limits<unsigned>::max() << "\n";
}
