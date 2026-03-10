#include <iostream>

using namespace std;

void swap (int &a, int&b){
	int c= a;
	a=b;
	b=c;	
}

int mcd(int a , int b){
	
	if(b > a) swap (a,b);
	
	int r = 0;
	do{
		r = a % b;
		a = b;
		b = r;
		
	}while(r != 0);
	
	return a;
}




int main(int argc, const char * argv []){

	int a, b;
	
	cin >> a >> b;
	
	int c = mcd (a,b);
	
	cout << "El MCD de " << a << " y " << b << " es : " << c << endl;
	
	return 0;

}