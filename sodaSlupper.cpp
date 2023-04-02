#include <iostream>
using namespace std ; 

int main(){
    int a , b , c  ,d  , tot ; 

    cin >> a >> b >> c ; 

    d = ( a + b) ;

    while (d >= c){
        tot = d ; 
        d /= c ;
        tot = tot + d;
        d = tot % c ;
    }

    cout << tot << endl ;
}