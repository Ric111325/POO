#include "rational.hpp"

using namespace std;

int main(int argc, const char * argv[]){

	int a,b,c,d;

	cout << "Escribe r1: \n(Numerador Denominador)" << endl;
	cin >> a >> b;

	cout << "\nEscribe r2: \n(Numerador Denominador)" << endl;
	cin >> c >> d;

	rational r1(a,b);
	rational r2(c,d);
	rational r3(2);
	
	if ((r1 / r2) == r1 * (rational(1) / r2)) cout << "Siempre es verdad\n";
	if ((int) r1 <= (float) r1) cout << "Siempre es verdad\n\n";
	
	cout << "\nSiempre es uno: " << float(r1 * !r1) << endl;
	cout << "Siempre es cero: " << float(r1 - r1) << "\n\n";
	
	cout << "r1: " << r1 << " = " << (float) r1 << endl;
	cout << "r1: " << r2 << " = " << (float) r2 << "\n\n";
	
	r1 *= r1;
	
	cout << "r1 elevado al cuadrado: " << r1 << " = " << (float) r1 << endl;
	
	r1 += 1;
	
	cout << "r1 aumentado en uno: " << r1 << "\n\n";
	
	r1 = r2 = r3;
	
	cout << "r1: " << r1 << ", r2: " << r2 << ", r3: " << r3 << endl;
	
	r1 = rational(1,2);
	r2 = rational(1,3);
	r3 = rational(1,4);
	
	r1 += r2 += r3;
	
	cout << "r1: " << r1 << ", r2: " << r2 << ", r3: " << r3 << endl;
	
	r1 = rational(1,2);
	r2 = rational(2,3);
	r3 = rational(3,4);
	
	r1 *= r2 += r3;
	
	cout << "r1: " << r1 << ", r2: " << r2 << ", r3: " << r3 << endl;
	
	r1 = rational(2,3);
	
	r1 = rational(3,4);
	r2 = rational(3,4);
	
	r1 -= r2 -= r1;
	
	cout << "r1: " << r1 << ", r2: " << r2 << endl;
	
	r1 = rational(1,2);

	return 0;	
} 