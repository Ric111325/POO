#include "rational.h"

using namespace std;

int main(int argc, const char * argv[]){
	
	int a,b;
	
	cout << "Ingresa a: ";
	cin >> a;
	cout << "Ingresa b: ";
	cin >> b;
	
	rational r1;        
    rational r2(0,b);   
    rational r3(b);     
    rational r4(a,b);   
    rational r5(b,a);   
    rational r6(a,-b);  
    rational r7(-a,-b); 
    rational r8(r5);

	cout << "r1: " << r1 << endl;
	cout << "r2: " << r2 << endl;
	cout << "r3: " << r3 << endl;
	cout << "r4: " << r4 << endl;
	cout << "r5: " << r5 << endl;
	cout << "r6: " << r6 << endl;
	cout << "r7: " << r7 << endl;
	cout << "r8: " << r8 << endl;
		
}