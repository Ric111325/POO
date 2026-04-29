#include <iostream>
#include <exception>
#include <cassert>

using namespace std;

float divide (int a, int b){

    try{
 
        if (b==0) throw 1;
        if (a < 0) throw 'x' ;
    } catch(int x){
        if(x == 2) cout <<"Procura no usar numeradores negativos\n";

        if(x == 1){
            cout << "Este error ta potente, yo no se nada\n";
            throw;
        }
    }
    return (float)a/b;
    
}

int main(int argc, char const *argv[])
{
    try{    
        int a,b;

        cout <<"Dame dos numeros"<< endl;
        cin >> a >> b;
    
        float c = divide(a,b);

        cout << "El resultado de la division: " << c << endl;
    
    } catch (int x){
     
        if (x == 1) cout << "Division entre cero";
        else cout << "Otro tipo de error";
    }

    return 0;
}

