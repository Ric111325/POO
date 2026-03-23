#include <iostream>
using namespace std;



class base{
    int x;

public:
    base(){x = 0; }
    base(int a){x = a;}


    int getx () const {return x;}

};


class deriv: public base{

    int y;

    public:

    deriv(){ y = 0;}
   
    deriv(int a):base(a){
         
        y = a;
    }

    int gety() const {return y;}
};


int main (int argc, const char *argv[]){

    deriv obj(5);
    
    cout<< obj.getx() << endl;
    cout<< obj.gety() << endl;

    return 0;
}