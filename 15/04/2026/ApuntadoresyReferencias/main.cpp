#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 10;
    int &b = a;
    
    a *= 2;
    
    cout << b << endl;
    cout << "\nDirecciones:\n";
    cout << "a: " << &a << endl;
    cout << "b: " << &b << endl;
    cout << "\n Prubea de apuntadores\n\n";

    int *p = &a;

    cout << "p: "<< p << endl;
    cout << "*p: "<< *p << endl;
    
    
    return 0;
}
