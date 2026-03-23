#include "rational.hpp"

using namespace std;

int main(int argc, const char * argv[]){

	int a,b,c,d;

	cout << "Escribe r1: \n(Numerador Denominador)" << endl;
	cin >> a >> b;

	cout << "\nEscribe r2: \n(Numerador Denominador)" << endl;
	cin >> c >> d;

	rational r1(a , b);
	rational r2 (c , d)	;

	cout << "\nr1: " << r1 << endl;
	cout << "r2: " << r2 << endl;
	
	float x = r1;
	float y = r2;

	cout << "\nEn decimal:"<< endl;
	cout << "r1: " << x << endl;
	cout << "r2: " << y << endl;

	int n = (int)r1;
	int m = (int)r2;

	cout << "\nEntero:" <<endl;
	cout << "r1: " << n << endl;
	cout << "r2: " << m << endl;


	rational sum = r1 + r2;
	rational diff = r1 - r2;
	rational mult = r1 * r2;
	rational div = r1 / r2; 
	
	cout << "\nOperaciones:\n----------\n";
	cout << "Sum: " << sum << endl;
	cout << "Diff: " << diff << endl; 
	cout << "Multi: " << mult << endl; 
	cout << "Div: " << div << endl; 
	cout << "\nMult inv: " << r1 * !r1 << endl; 
	cout << "Add inv: " << r1 + -r1 << endl; 
	cout << "\nIdent: " << r1 * rational(1) << endl; 
	cout << "Null: " << r1 * rational () << endl; 


	cout << "\nOperaciones en Decimal:\n----------\n";
	cout << "Sum: " << (float)sum << endl;
	cout << "Diff: " << (float)diff << endl; 
	cout << "Multi: " << (float)mult << endl; 
	cout << "Div: " << (float)div << endl; 

	cout << "\nOperaciones en Entero:\n----------\n";
	cout << "Sum: " << (int)sum << endl;
	cout << "Diff: " << (int)diff << endl; 
	cout << "Multi: " << (int)mult << endl; 
	cout << "Div: " << (int)div << endl; 

	cout << "\nRelaciones: \n----------\n"; 
	if (r1 <= r2) cout << "r1 es menor o igual que r2\n";
	if (r1 >= r2) cout << "r1 es mayor o igual que r2\n"; 
	if (r1 < r2) cout << "r1 es menor que r2\n"; 
	if (r1 > r2) cout << "r1 es mayor que r2\n"; 
	if (r1 == r2) cout << "r1 y r2 son iguales\n"; 
	if (r1 != r2) cout << "r1 y r2 son diferentes\n";
	return 0;
	
	
} 