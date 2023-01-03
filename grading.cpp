#include <iostream>
using namespace std ; 

int main(){
    int a , b ,c , d , e ; 
    int x ;
    cin >> a >> b >> c >> d >> e ;
    cin >> x ; 

    if(x >= a){
        cout << 'A';
    } else if ( x >= b){
        cout << 'B';
    } else if ( x >= c){
        cout << 'C';
    } else if (x >= d){
        cout << 'D' ;
    } else if ( x >= e){
        cout << 'E';
    } else {
        cout << 'F';
    }
    cout << endl ;

}