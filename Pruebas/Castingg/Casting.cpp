#include <iostream>

using namespace std;

int main (int argc, const char *argv []){

	srand ((unsigned) time (nullptr));
	


    int a = 7;
    int b = 3;

    cout << float (a)/b << endl;
    cout << (float) a/b << endl;

	for (int i = 0; i <10; i++){
		
		float x = (float) rand() /RAND_MAX;
		cout << x << endl;
		
	}		


    return 0;

}

