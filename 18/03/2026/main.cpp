#include <iostream>

using namespace std;

class base {

private: int a;
protected: int b;
public: int c;

    base (){
        
        a=1;
        b=2;
        c=3;
    }
};

class derivada:public base {

private: int x;
protected: int y;
public: int z;

    derivada(){

        x=10;
        y=11;
        z=12;
    }

    void datos (){

        cout << x << endl;
        cout << y << endl;
        cout << z << endl;

        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
    }
};


int main (int argc, const char * argv[]){


    
    /*
    base objbase;

    cout << objbase.a << endl;
    cout << objbase.b << endl;
    cout << objbase.c << endl;
    */

    derivada objderiv;
    objderiv.datos();
    cout << objderiv.y << endl;
    cout << objderiv.x << endl;
    cout << objderiv.z << endl;
   


    return 0;
}