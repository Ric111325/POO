
#include <iostream>
using namespace std;

void swap (int &m, int &n){
	
	int aux=m;
	m=n;
	n=aux;	
}


int main (int argc, const char * argv [] ){
	
	int a = 5;
	int b = 7;
	
	swap (a,b);
	
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	
	return 0;
}