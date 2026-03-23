#include <iostream>

using namespace std;

class classA {

    public:

     classA(){cout << "Construyendo en la clase A\n";}
     ~classA(){cout << "Destruyendo en la clase A\n";}

 };

 class classB: public classA {

    public:

     classB(){cout << "Construyendo en la clase B\n";}
     ~classB(){cout << "Destruyendo en la clase B\n";}

 };

 class classC: public classB{

    public:

     classC(){cout << "Construyendo en la clase C\n";}
     ~classC(){cout << "Destruyendo en la clase C\n";}

 };


 int main(int argc, const char * argv[]){

    { classA a;}
    cout << endl;

    { classB b;}
    cout << endl;

    { classC c;}
    
    return 0;

 }