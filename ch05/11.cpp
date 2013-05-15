//стр.146
//(*2) Прочитайте последовательность слов из потока ввода. Пусть слово Quit будет означать конец ввода. Распечатайте слова в порядке ввода. Исключите из печати одинаковые слова. Отсортируйте слова перед печатью.

#include <iostream>
#include <algorithm>
#include <string>
#include <list>

using namespace std;
typedef list<string> string_t;

void read_words(string_t& s)
{
	string word;
	while(word != "Quit") {
		cin >> word;
		s.push_back(word);
	}
}

void print_words(const string_t& s)
{
	for(string_t::const_iterator iter = s.begin(), end = s.end(); iter != end; ++iter)
		cout << *iter << " ";
	cout << "\n";
}

void unique_unsorted(string_t& s)
{
	// remove duplicates in unsorted list
	for(string_t::iterator iter = s.begin(), end = s.end(), duplicate = s.end(); iter != end; ++iter) {
		string_t::iterator& before = iter;
		while((duplicate = find(++iter, end, *before)) != s.end()) {
			s.erase(duplicate);
			iter = before;
		}
	}
	// Some people may found this style dangerous, and they are right, because I manipulate with iterators 
	// and change container (not elements value), so iterators can stand invalid.
	// Fortunately C++ planned as language that allow you do everything, but under YOUR responsibility. 
	// So if you don't know how some things works, better doesn't use it.
}

void sort(string_t& s)
{
	s.sort();
}


void solution1()
{
	typedef list<string> string_t;
	string_t storage;

	read_words(storage);
	print_words(storage);
	storage.sort();
	storage.unique();
	print_words(storage);	
}

void solution2()
{
	string_t storage;
	read_words(storage);
	print_words(storage);
	unique_unsorted(storage);
	sort(storage);
	print_words(storage);
}

int main(int argc, char* argv[])
{
	if("1" == argv[1])
		solution1();
	else
		solution2();
	
	return 0;
}
