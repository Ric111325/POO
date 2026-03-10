#include "rational.h"

using namespace std;

int main (int argc, const char * argcv[]){
	
	rational a(1,2);
	rational b(1,2);
	
	/*cin >> a;
	cin >> b;
	
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	
	rational c = a + b;
	rational d = a - b;
	
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << d << endl;
	
	cout << "\n Negacion de c: ";
	
	rational e = -c;
	cout << e << endl;
	
	cout << "\n Negacion de d: ";
	
	rational f = -d;
	cout << f << endl;
	*/
		
	a += b;
	
	
	rational c(1,2);
	rational d(1,2);
	rational e(1,2);
	
	b += c += d += e += a;
	
	cout << "a: "<< a << endl;
	cout << "b: "<< b << endl;
	cout << "c: "<< c << endl;
	cout << "d: "<< d << endl;
	cout << "e: "<< e << endl;
	
	return 0;
	
}