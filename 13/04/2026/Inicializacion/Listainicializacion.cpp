#include <iostream>
using namespace std;

class dummy {

    int x;

public: dummy(int a){

        x=a;
    }
};



class base {

    int x;

public: base(float a){

        x=a;
    }
};

class myclass:public base {

    dummy dum;

    float radio;
    const float pi;
    float &mdd;

public: 
    myclass(float);
};

myclass::myclass(float r): pi(3.1416) , mdd(radio), dum(4), base(r){

    radio = r;
    
}

int main (int argc, const char * argv[]) {

    myclass circle (5);

    return 0;
}