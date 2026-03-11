#ifndef radio_h
#define radio_h

#include <iostream>
#include <iomanip>
#include <ostream>
using namespace std;

class radio{
	
	typedef enum { am, fm } banda;
	
	banda band;
	
	int amfreq;
	float fmfreq;
	
	
public:
	
	radio();
	
	friend ostream &operator << (ostream &, radio &);
	
	explicit operator float() const{

		return band == am ? amfreq : fmfreq;
	}

	void cambiar();
	void inc();
	void dec();
	
	void operator ++ (int);
	void operator -- (int);	
	void display();	


};

ostream &operator << (ostream &, radio &);



#endif /* radio_h */