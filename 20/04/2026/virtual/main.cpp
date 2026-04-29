#include <iostream>

using namespace std;

class base {

public:

    virtual void mensaje() {cout << "Base\n"; }
};

class derivada:public base{

public:
    void mensaje()override {cout << "Derivada\n";}

};

int main(int argc, char const *argv[])
{
    base a;
    derivada b;

    a.mensaje();
    b.mensaje();

    base &m = b;
    m.mensaje();

    base *p = &b;
    p -> mensaje();

    return 0;
}
