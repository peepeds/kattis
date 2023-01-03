#include <iostream>
#include <cmath>
using namespace std ; 

int main(){
    const double phi = 3.141592 ; 
    double a , b ,c, x , y ; 

    do { 
        cin >> a >> b >> c ;

        x = phi * pow( a , 2); 
        y =  4 * c / b * a *a  ; 
        if (a != 0 && b!=0 && c!= 0){
            cout << x <<' ' << y   << endl ;
        }
       
    } while ( a != 0 && b!=0 && c!= 0 );
}