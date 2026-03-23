#include <iostream>
using namespace std;



class base{
    int x;

public:

    base(){x = 0; cout << "Construyendo la base: \n"; }
    base(int a){x = a; cout << "Construyendo la base: \n";}

    ~base () { cout << "Destruyendo la base: \n"; }


    int getx () const {return x;}

};


class deriv: public base{

    otra radio;
    int y;

    public:

    deriv(): radio ('A', 123){ y= 0; cout << "Construyendo la derivada: \n";}
   
    deriv(int a):base(a*2),radio('A',123){
         
        y = a;
        cout << "Construyendo la derivada: \n";
    }

    ~deriv() { cout << "Destruyendo la base: \n"; }
    int gety() const {return y;}
};


int main (int argc, const char *argv[]){
    {
    deriv obj(5);
    
    cout<< obj.getx() << endl;
    cout<< obj.gety() << endl;

    return 0;
    }

    cout << "El programa esta a punto de terminar\n";
}