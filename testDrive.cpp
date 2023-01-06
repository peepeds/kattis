#include <cstring>
#include <iostream>
using namespace std ; 

int main(){
    int a , b , c ;

    cin >> a  >> b >> c ;

    if( b == a + a && c == a + a + a){
        cout <<"cruised" << endl ;
    } else if ( b < a && c < b){
        cout << "accelerated" << endl ;
    } else if ( b > a && c < b){
        cout << "turned" << endl ;
    } else {
        cout << "braked" << endl ;
    }
}