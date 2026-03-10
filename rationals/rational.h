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
	
	rational();
	rational(int, int = 1);
	rational(rational &);
	
	void simplify ();
	
	int num() const {return _num;}
	int denom() const {return _denom;}
	
};


ostream &operator << (ostream &, const rational&);

#endif /*rational_h*/