#include "rational.h"

using namespace std;

int main(int argc, const char * argv[]){
	
	int a,b,c,d;
	
	cout << "Ingresa a: ";
	cin >> a;
	cout << "Ingresa b: ";
	cin >> b;
	cout << "Ingrese c: ";
	cin >> c;
	cout << "Ingrese d: ";
	cin >> d;

	rational r1(a/b);      
    rational r2(c/d);   
    
	rational sum = r1 + r2;	
	rational diff = r1 - r2;
	rational mult = r1 * r2;
	rational div = r1 / r2;

	
	cout << "\nOperaciones:\n----------\n\n ";
	
	cout << "Sum: " << sum << endl;
	cout << "Diff: " << diff << endl;
	cout << "Multi: " << mult << endl;
	cout << "Div: " << div << endl;
	
	cout << "\nMult inv: " << r1 * !r1 << endl;
	cout << "Add inv: " << r1 + !r1 << endl;
	
	cout << "\nIdent: " << r1 * rational(1) << endl;
	cout << "Null: " << r1 * rational () << endl;

	cout << "\nRelaciones: \n----------\n\n";

	if (r1 <= r2) cout << "r1 es menor o igual que r2\n";
	if (r1 >= r2) cout << "r1 es mayor o igual que r2\n";
	if (r1 < r2) cout << "r1 es menor que r2\n";
	if (r1 > r2) cout << "r1 es mayor que r2\n";
	if (r1 == r2) cout << "r1 y r2 son iguales\n";
	if (r1 != r2) cout << "r1 y r2 son diferentes\n";

	
	return 0;
}