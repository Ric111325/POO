#include <iostream>
#include "radio.h"

int main (int argc, const char * argv[]){
	
	radio a;

	a.cambiar();

	for(int i = 0; i < 10; i++) a--;
	
	cout << "El radio esta en la frecuencia " << a << endl;	

	cout << "\n\nEjemplo del uso de explicit \n\n";

	cout<< "Radio: " << a << endl;
	cout<< "Radio: " << (float)a << endl;
	    
	return 0;	
}