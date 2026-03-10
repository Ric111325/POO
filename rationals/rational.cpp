#include "rational.h"

rational::rational (){
	
	_num = 0;
	_denom = 1;
		
}

rational::rational (int a, int b){
	
	
	assert (b != 0);
	
	_num = a;
	_denom = b;
	
	simplify();	
}

rational::rational(rational& r){
	
	_num = r._num;
	_denom = r._denom;
		
}


void rational::swap(int &a, int &b){
	
	int c=a;
	a=b;
	b=c;
	
}

void rational::simplify(){
	
	if (_num == 0){
		_denom=1;
		return;
	}
	
	int a = _num;
	int b = _denom;
	
	if (b > a) swap (a,b);
	
	int r = 0;
	
	do{
		
		r = a % b;
		a = b;
		b = r;
	}while(r != 0);
	
	_num /= a;
	_denom /= a;
	
	if (_num < 0 && _denom < 0){
		
		_num = -_num;
		_denom = -_denom;		
	}
	
	if (_denom < 0){
		
		_num = -_num;
		_denom = -_denom;		
	}
}

ostream &operator << (ostream &os, const rational &a){
	
	return os << a.num() << " : " << a.denom();

}