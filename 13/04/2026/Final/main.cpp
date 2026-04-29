#include <iostream>

using namespace std;

class a {

};

class b: public a{

};

class c final:public b{

};

int main (int argc, const char * argv[]){

    a obj1;
    b obj2;
    c obj3;

    return 0;
}