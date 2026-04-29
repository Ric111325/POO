#include <iostream>
#include <string>

using namespace std;


class cocinero{

public: void hacer(string cosa){
    cout <<"Se cocinar "<< cosa << endl;
}
};

class musico{

public: void hacer (string cosa){

    cout << "Se tocar "<< cosa << endl;
}

};

class hijo: public cocinero, public musico{

};

int main (int argc, const char * argv[]){

    string platillo = "Ceviche";
    string obra = "Sonata";

    cocinero a;
    musico b;

    a.hacer(platillo);
    b.hacer(obra);

    hijo c;

    cout << "Soy el hijo y se: "<< endl;
    ((cocinero)c).hacer(platillo);
    ((musico)c).hacer(obra);

    return 0;
}