#include <iostream>
using namespace std ;

int main(){
    int a , b , c ,d , e =0 , i ;

    cin >> a ;
    for(i=0;i<a;i++){
        cin >> b >> c >> d ;
        e = c -d  ;

        if ( e > b ){
            cout << "advertise" << endl ;
        } else if  ( b == e ) {
            cout << "does not matter" << endl ;
        } else {
            cout << "do not advertise" << endl ;
        }
    }
}