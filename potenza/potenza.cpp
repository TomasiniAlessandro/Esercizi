#include <iostream>
using namespace std;

int x=1;
int y=0;

int powint(int x, int y){
    int result = 1;
    for (int k=0; k<y; k++){
        result *= x;
    }
    return result;
}

int main() {
    while (x !=0){ 
        cout << "inserire base: \n" ;
        cin >> x ;
        cout << "inserire esponente: \n"; 
        cin >> y ;
        int pow = powint(x,y);
        cout << x << "^" << y << " = " << pow << endl; 
        cout << "------------------- \n" ; 
    }
}




