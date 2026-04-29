#include <iostream>
#include "radio.h"

int main (int argc, const char * argv[]){
	
	radio *p;
	p = new radio;
	 
	cout << *p << endl;

	p -> cambiar();
	cout << *p << endl;

	(*p)++;
	cout << *p << endl;

	p -> operator++(1);
	cout << *p << endl;

	delete p;

	return 0;	
}