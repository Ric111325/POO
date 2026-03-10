#include "radio.h"


radio::radio(){
	
	band = am;
	amfreq = 535;
	fmfreq = 88.0;	
}

void radio::cambiar(){
	
	if (band == am) band = fm;
	else band == am;	
}

void radio::inc(){

	if (band == am ) amfreq = (amfreq < 1705) ? amfreq += 10 : amfreq = 535;
	else fmfreq = (fmfreq < 108) ? fmfreq += 0.2 : fmfreq = 88;
}

void radio::dec(){
	
	if (band == am ) amfreq = (amfreq > 535) ? amfreq -= 10 : amfreq = 1705;
	else fmfreq= (fmfreq > 88) ? fmfreq -= 0.2: fmfreq = 108;
	}

void radio::operator ++ (int){
	
	if (band == am ) amfreq = (amfreq < 1705) ? amfreq += 10 : amfreq = 535;
	else fmfreq = (fmfreq < 108) ? fmfreq += 0.2 : fmfreq = 88;
	
}

void radio::operator -- (int){
	
	if (band == am ) amfreq = (amfreq > 535) ? amfreq -= 10 : amfreq = 1705;
	else fmfreq= (fmfreq > 88) ? fmfreq -= 0.2: fmfreq = 108;

}
	
ostream &operator << (ostream &os, radio &r){
	
	if (r.band == radio::am) os << "AM "<< r.amfreq;
	else os << "FM " << fixed << setprecision(1) << r.fmfreq;

	return os;
}	
	
void radio::display(){
	
	if (band == am) cout<< "AM " << amfreq << endl;
	else{
		cout << "FM " << fixed <<setprecision(1) << fmfreq << endl;
	}	
}


	