#include "rational.hpp"

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

// Operaciones Aritmeticas

rational operator + (rational a, rational b){

	rational r;

	r=a;
	r+=b;

	return r;
}

rational operator - (rational a, rational b){

	rational r;

	r=a;
	r-=b;

	return r;
}

rational operator * (rational a, rational b){

	rational r;

	r=a;
	r*=b;

	return r;
}

rational operator / (rational a, rational b){

	rational r;

	r=a;
	r/=b;

	return r;
}


rational operator ! (rational r){

	return rational(r.denom(), r.num());
}

rational operator - (rational r){
	
	return rational(-r.num(), r.denom());
}

//Operaciones aritmeticas de asignacion

rational& rational::operator = (const rational&r){

	if (this != &r)	{
		_num = r._num;
		_denom = r._denom;
	}	
	return *this;
}

rational& rational::operator += (const rational&r){

	_num = _num*r._denom + r._num*_denom;
	_denom = _denom* r._denom;
	
	simplify ();	

	return *this;
}

rational& rational::operator -= (const rational&r){

	_num = _num*r._denom - r._num*_denom;
	_denom = _denom* r._denom;
	
	simplify ();	

	return *this;
}

rational& rational::operator *= (const rational&r){

	_num *= r._num;
	_denom *= r._denom;
	
	simplify ();	

	return *this;
}

rational& rational::operator /= (const rational&r){

	_num *= r._denom;
	_denom *= r._num;
	
	simplify ();	

	return *this;
}

//Operaciones Relacionales

bool operator== (rational a, rational b){

	return a.num() == b.num() && a.denom() ==b.denom();
}

bool operator != (rational a, rational b){

	return !(a == b);
}

bool operator < (rational a, rational b){
 	
	return a.num()*b.denom() < b.num()*a.denom();
}

bool operator > (rational a, rational b){

	return a.num()*b.denom() > b.num()*a.denom();
}

bool operator <= (rational a, rational b){

	return !(a>b);
}

bool operator >= (rational a, rational b){

	return !(a<b);
}

ostream &operator << (ostream &os, const rational &a){
	
	return os << a.num() << " : " << a.denom();

}

istream &operator >> (istream &is, rational &r){

	int a,b;
	
	is >> a >> b;
	
	r = rational(a,b);
	
	return is;

}