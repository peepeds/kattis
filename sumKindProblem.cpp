#include <iostream>
using namespace std;

int main(){
    int a , b ,c ,d = 0 ,e=0, i , j , k ;

    cin >> a ;

    for(i=0;i<a;i++){
        cin >> b >> c ;
        for(j=0;j<c;j++){
            d= d+j;
        }
        for(k=0;k<=c;k++){
            e = e + k ;
        }


        cout<< b << ' ' << e << ' ' << e+d << ' ' << e+e  << endl ;
        d = 0 , e = 0 ;
    }
}