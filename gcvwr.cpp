#include <iostream>
using namespace std ;

int main(){
    int a , b , c , d ,e , i ;
    int f = 0 ;

    cin>>  a >> b >> c ;
    d = ( a - b ) * 90 / 100 ;
    for(i=0;i<c;i++){
        cin >> e ;
        f = f + e ;
    }

    cout << d - f << endl ;
}