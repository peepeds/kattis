#include <iostream>
#include <math.h>
using namespace std ;

int main(){
    long long unsigned int a , b , c =0,d = 0;
    int i ;

    cin >> a ; 
    cin >> b ;

    for(i=0;i<a;i++){
        if(b%10==1){
            c++;
        }
        b /= 10 ;

    }

    d = pow(2,c);

    d == 1 ? d = 0 : d = d ;
    cout << d  << endl ;
}