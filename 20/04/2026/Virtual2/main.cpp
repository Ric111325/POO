#include <iostream>

using namespace std;

class mascota {

public:

    virtual void sonido (){cout << "Hace ruido \n";}

};

class perro: public mascota{

public:

    void sonido()override { cout << "Ladra\n";}

};

class gato: public mascota{

public: 
    void sonido()override { cout << "Maulla\n";}
};

class cotorro:public mascota{

public:
    void sonido()override {cout <<"Habla\n";}
};

int main(int argc, char const *argv[])
{
    mascota a;
    perro firulais;
    gato maximomeridio;
    cotorro suegra;

    //a.sonido();
    //firulais.sonido();
    //maximomeridio.sonido();
    //suegra.sonido();

    
    return 0;
}
