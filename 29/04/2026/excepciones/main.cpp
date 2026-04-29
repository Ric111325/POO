#include <iostream>
#include <exception>
#include <cassert>

using namespace std;

float divide (int a, int b)
{
    if (b==0) throw 1;
    if (a <0) throw "x";

    return (float)a/b;
}


int main(int argc, char const *argv[])
{
    try{    
        int a,b;

        cout <<"Dame dos numeros"<< endl;
        cin >> a >> b;
    
        if (b==0) throw 1;
        if (a <0) throw "x";

        float c = (float) a/b;

        cout << "El resultado de la division: " << c << endl;
    
    } catch (int x){
     
        if (x == 1) cout << "Division entre cero\nVuelve a intentarlo";
        else cout << "Otro tipo de error";
    }

    catch (char asd){

        cout << "El numerador no puede ser negativo";
    }

    return 0;
}

