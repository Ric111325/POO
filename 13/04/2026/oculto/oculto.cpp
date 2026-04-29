#include <iostream>

using namespace std;

class base{ 

public:
    void mensaje(){
        cout << "Estoy en la clase base"<< endl;
    }
};

class derivada:public base{

public:
    
    void mensaje(){
        cout << "Estoy en la clase derivada" << endl;
        base::mensaje();
    }

};

int main (int argc, const char *argv[]){

    base m;
    derivada n;

    m.mensaje();
    n.mensaje();

    return 0;
}