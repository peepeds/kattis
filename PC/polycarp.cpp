#include <iostream>
#include <cmath>
using namespace std ;

int main(){
    unsigned int a , b, i , x , y  , z; 

    cin >> a ; 
    for(i=0 ; i < a ; i++){
        cin >> b ; 
        x =  sqrt(b);
        y = cbrt(b); 
        z = sqrt(cbrt(b));
        cout << x+y-z << endl ;
    }
}