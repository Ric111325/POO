#ifndef rational_h
#define rational_h

#include <iostream>
#include <ostream>
#include <assert.h>
#include <istream>



using namespace std;

class rational {
	
	int _num;
	int _denom;
	
	void swap (int&, int&);
	
public:
	
	friend istream &operator >> (istream&, rational &);
	
	rational();
	rational(int, int = 1);
	rational(const rational &);
	
	void simplify ();
	
	rational &operator += (const rational &);
	rational &operator = (const rational &);
	
	int num() const {return _num;}
	int denom() const {return _denom;}
	
};

ostream &operator << (ostream &, const rational&);
istream &operator >> (istream &, rational&);

rational operator + (rational, rational);
rational operator - (rational, rational);

rational operator - (rational);


#endif /*rational_h*/