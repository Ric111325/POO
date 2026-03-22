#include "rational.h"

using namespace std;

int main(int argc, const char * argv[]){

	rational r1, r2;

	cout << "Escribe r1: \n(Numerador Denominador)" << endl;
	cin >> r1;

	cout << "Escribe r2: \n(Numerador Denominador)" << endl;
	cin >> r2;
	

	cout << "r1: " << r1 << endl;
	cout << "r2: " << r2 << endl;
	
	cout << "En decimal:"<< endl;
	cout << "r1: " << (float)r1 << endl;
	cout << "r2: " << (float)r2 << endl;

	cout << "Entero:" <<endl;
	cout << "r1: " << (int)r1 << endl;
	cout << "r2: " << (int)r2 << endl;

	return 0;
} 