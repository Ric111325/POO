#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class figura {
public:
    
    string nombre;

    figura(string n){
        nombre = n ;
    }

    virtual float calcularArea() = 0;
    virtual void mostrarInfo() = 0;

    virtual ~figura() {};
};

class rectangulo:public figura{

private:
    float base;
    float altura;

public:
    rectangulo (float a, float b):figura("Rectangulo"){

        base = a;
        altura = b;
    }

    float obtenerBase(){
        return base;
    }

    float obternerAltura(){
        return altura;
    }

    float calcularArea() override {
        return base * altura;
    }

    void mostrarInfo() override {
        cout << nombre << endl;
        cout << "Base: " << base << endl;
        cout << "Altura: " << altura << endl;
        cout << "Area: " << calcularArea()<< endl;
        cout << endl << endl;
    }

};

class circulo:public figura{

private:
    float radio;


public:
    circulo (float a):figura("Circulo"){

       radio = a;
    }
    
    float obtenerRadio(){
        return radio;
    }

    float calcularArea() override {
        return 3.1416 * radio * radio;
    }

    void mostrarInfo() override {
        cout << nombre << endl;
        cout << "Radio: " << radio << endl;
        cout << "Area: " << calcularArea()<< endl;
        cout << endl << endl ;
    }

};

class triangulo:public figura{

private:
    float base;
    float altura;

public:
    triangulo (float a, float b):figura("Triangulo"){

        base = a;
        altura = b;
    }
    
    float obtenerBase(){
        return base;
    }

    float obtenerAltura(){
        return altura;
    }

    float calcularArea() override {
        return (base * altura)/2;
    }

    void mostrarInfo() override {
        cout << nombre << endl;
        cout << "Base: " << base << endl;
        cout << "Altura: " << altura << endl;
        cout << "Area: " << calcularArea()<< endl;
        cout << endl << endl ;
    }

};

int main(int argc, char const *argv[])
{
    figura *a[10];

    srand(time(nullptr));

    for (int i = 0; i < 10; i++){

        int figuras = rand() % 3 + 1;

        float b = rand() % 10 + 1;
        float h = rand() % 10 + 1;
        float r = rand() % 10 + 1;

        if (figuras == 1){

            a[i]= new rectangulo (b,h);
        }
        else if (figuras == 2){
            a[i] = new circulo(r);
        }
        
        else {
            a[i] = new triangulo(b,h);
        }
    }
    
    for (int i = 0; i < 10; i++)
    {
        a[i] -> mostrarInfo();
    }
    
    for (int i = 0; i < 10; i++)
    {
        delete a[i];
    }
    
    return 0;
}
