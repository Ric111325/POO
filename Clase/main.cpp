
#include <iostream>
#include "ejemplo.h"

using namespace std;

	int main(int argc, const char *argv[]){
		
		avion a;
		
		//a.turista = 5; <--- Esto no funciona porque accede a la parte privada de la clase
		a.asignar_turista(5000);
		a.asignar_primera(-10);
		
		cout <<"El avion tiene " <<a.cuantas_turista() 
			<<" asientos en clase turista \n";
		
		cout << "El avion tiene " <<a.cuantas_primera()
			<<" asientos en clase primera \n";
		
		asientos(a);
		
		
		return 0;
	}