#include "ejemplo.h"



	void avion::asignar_turista(int n){
		
		if (n < 0 or n > 100) {
		cout<<"Numero no valido de asientos \n";
		turista=50;
		
		}else turista = n;
	}
	
	
	void avion::asignar_primera(int n){
		
		
		primera = n;
	}
	
	
	int avion::cuantas_turista(){
		
		return turista;
	}
	
	
	int avion::cuantas_primera(){
		
		return primera;
	}
	
	void asientos (avion m){
		
		cout<< "Asientos de primera: " << m.primera << endl;
		cout<< "Asientos de turista: " << m.turista << endl;
	}
	