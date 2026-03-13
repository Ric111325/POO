#ifndef rational_h
#define rational_h

#include <iostream>
#include <ostream>
#include <assert.h>

using namespace std;

class rational {
	
	int _num;
	int _denom;
	
	void swap (int&, int&);
	
public:
	
	friend istream &operator >> (istream &, rational &);

	rational();
	rational(int, int = 1);
	rational(rational &);
	
	explicit operator float() const {

		return (float) _num / _denom;	 
	}

	void simplify ();

	//Operaciones aritmeticas de asignacion
	rational &operator = (const rational&);
	rational &operator += (const rational&);
	rational &operator -= (const rational&);
	rational &operator *= (const rational&);
	rational &operator /= (const rational&);

	int num() const {return _num;}
	int denom() const {return _denom;}
	
};


ostream &operator << (ostream &, const rational&);
istream &operator >> (istream &,rational&);

//Operaciones Aritméticas
rational operator + (rational, rational);
rational operator - (rational, rational);
rational operator * (rational, rational);
rational operator / (rational, rational);
rational operator ! (rational);
rational operator - (rational);

//Operaciones Relacionales
bool operator == (rational,rational);
bool operator != (rational,rational);
bool operator < (rational,rational);
bool operator > (rational,rational);
bool operator <= (rational,rational);
bool operator >= (rational,rational);

#endif /*rational_h*/