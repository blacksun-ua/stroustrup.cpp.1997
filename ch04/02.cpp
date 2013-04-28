//стр.125
//(1*) Проделайте следующее для каждого объявления в $4.9: если объявление не является определением, допишите определение. Если объявление является определением, напишишите соответствующее объявление, которое не является определением.

#include <string>
#include <complex>
using namespace std;

char c;															/* - определение, объявление - */ extern char c1;
string s;														/* - определение, объявление - */ extern string s1;
int count = 1;													/* - определение, объявление - */ extern int i1;
const double pi = 3.1415926535897932385;						/* - определение, объявление - */ extern const double pi1; //  const char double pi; - error uninitialized const
extern int error_number;										/* - объявление, определение - */ int error_number1 = 2;
const char* name = "Njal";										/* - определение, объявление - */ extern const char* name1;
const char* season[] = {"spring", "summer", "fall", "winter"};	/* - определение, объявление - */ extern const char* season1[];	extern const char** season2;

struct Date { int d,m,y; };										/* - определение, объявление - */ struct Date1;
int day(Date* p) { return p->d; }								/* - определение, объявление - */ int day1(Date* p);
double sqrt(double);											/* - объявление, определение - */ double sqrt1(double val) { return val*val; }
template<class T> T abs(T a) { return a < 0 ? -a : a; }			/* - определение, объявление - */ template<class T> T abs1(T a);

typedef complex<short> point;									/* - определение, объявление - */ class point1;
struct User;													/* - объявление, определение - */ struct User1 { string name; string surname; string job; };
enum Beer { Carlsberg, Tuborg, Thor};							/* - определение, объявление - */ enum Beer1 : unsigned int; // --std=c++11
namespace NS { int a; };										/* - определение, объявление - */ namespace NS { extern int a1; }

// любое объявление в котором задается значение является определением
int main(int argc, char** argv)
{
	return 0;
}
