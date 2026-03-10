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

rational::rational(const rational& r){
	
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

rational  &rational::operator += (const rational &a){

	_num = _num * a._denom + _denom * a._num;
	_denom = _denom * a._denom;
	
	simplify ();
	
	return *this;
	
}

rational &rational::operator = (const rational &a){
	
	_num = a.num();
	_denom = a.denom();
	
	return *this;
}


rational operator + (rational a, rational b){
	
	int n = a.num() * b.denom() + a.denom() * b.num();
	int d = a.denom() * b.denom();
	
	rational r(n,d);
	return r;
	
}


rational operator - (rational a, rational b){
	
	int n = a.num() * b.denom() - a.denom() * b.num();
	int d = a.denom() * b.denom();
	
	rational r(n,d);
	return r;
	
}

rational operator - (rational a){
	
	rational b( -a.num (), a.denom() );
	return b;
	
}



ostream &operator << (ostream &os, const rational &a){
	
	return os << a.num() << " : " << a.denom();

}

istream &operator >> (istream &is, rational &a){
	
	cout << "Num: ";
	is >> a._num;
	
	cout << "Denom: ";
	is >> a._denom;

	a.simplify();
	
	return is;
	
}