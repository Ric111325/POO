#include "rational.hpp"

using namespace std;

int main(int argc, const char * argv[]){

	bool done = false;
	
while (!done) {
	
  try {
			
    int n1, d1, n2, d2;
			
    cout << "Iniciando la aplicacion\n\n";		
    cin >> n1 >> d1 >> n2 >> d2;
			
    rational a(n1,d1);
    rational b(n2,d2);
			
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
		
    cout << "suma:             " << a + b << endl;
	    cout << "resta:            " << a - b << endl;
	    cout << "multiplicacion:   " << a * b << endl;
	    cout << "division:         " << a / b << endl;
	    cout << "complemento de a: " << !a << endl;
	    cout << "negacion de a:    " << -a << endl;

    cout << "\nProceso exitoso\n\n";
			
    done = true;
			
  } catch (int e) {

    cout << "Se detecto una division por cero\n\n";

	if (e == 1){
		 cout << "Ocurrio un error en constructor\n\n";

	}
	
	else if (e == 2){
		cout << "Ocurrio un error en la division\n\n";

	}
	
	else if (e == 3){
		cout << "Ocurrio un error en el complemento\n\n";
	}

	}



	return 0;	
}