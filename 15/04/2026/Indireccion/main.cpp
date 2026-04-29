#include <iostream>
using namespace std;

class dummy{

public:

    dummy(){
        cout << "Se esta construyendo un objeto tipo dummy \n";
    }
    
    ~dummy(){
        cout << "Bye Bye\n";
    }

    void mensaje(){
        cout << "Hola mundo\n";
    }
};


int main(int argc, char const *argv[]){

    cout << "Antes de crear el objeto\n";

    dummy *p = new dummy;

    cout << "Acabo de crear el objeto \n";

    p -> mensaje();
    
    cout << "No he destruido el objeto\n";

    delete p;

    cout << "Acabo de destruir el objeto\n";
    cout << "Y el programa no ha terminado\n";


    return 0;
}
