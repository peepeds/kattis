#include <iostream>
using namespace std ;
int reverse( int a ){
    int balik = 0 , sisa = 0 ;

    while(a!=0){
        sisa = a % 10 ;
        balik = balik * 10 + sisa ;
        a /= 10 ;
    }
    return balik ;
}
int main(){
    int a , b , c , d ;
    cin >> a >> b ;
    c = reverse(a);
    d = reverse (b);

    c > d ? cout << c << endl : cout <<  d << endl ;
}