//стр.146
//(*2) Напишите функцию, подсчитывающую количество вхождений пар букв в строку string. Напишите функцию, которая делает то же самое в массиве символов, ограниченном нулем (С-строке). Например пара "ab" дважды встречается в строке "xabaacbaxaab".

#include <string>
#include <cstring>
#include <iostream>

using namespace std;

int search_occurrence(const string& source, const string& occur)
{
	cout << "call string variant" << endl;
	int res = 0;
	size_t pos = source.find(occur);
	while(string::npos != pos) {
		++res;
		pos = source.find_first_of(occur, pos + 1);
	}
	return res;
}

int search_occurrence(const char* source, const char* occur)
{
	cout << "call const char* variant" << endl;
	
	int res = 0;
	size_t source_length = strlen(source);
	size_t occure_length = strlen(occur);
	if(source_length > 0 && occure_length > 0 && source_length >= occure_length) {
		for(size_t i = 0, j = 0; i < source_length; ++i) {
			if(source[i] != occur[j]) {
				j = 0;
				continue;
			}
			if(++j == occure_length) {
				++res;
				j = 0;
			}
		}
	}	
	return res;
}

int main(int argc, char* argv[])
{
	const char* str1 = "qwoieuqwiuuqwweoiwedjadlqioewuoaqwqweioweuwoeiuewo";
	string str2(str1);
	const char* occur1 = "q";
	string occur2(occur1);
	int result = 0;
	
	result = search_occurrence(str1, occur1);
	cout << "In string '" << str1 << "' combination of letters '" << occur1 << "' occur" << (result > 1 ? "s " : " ") << result << " times." << endl;
	result = search_occurrence(str2, occur2);
	cout << "In string '" << str2 << "' combination of letters '" << occur2 << "' occur" << (result > 1 ? "s " : " ") << result << " times." << endl;
	
	return 0;
}
