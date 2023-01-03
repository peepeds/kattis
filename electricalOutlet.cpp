#include <iostream>
using namespace std ;

int main(){
    int a , b  ,d = 0, i ,j;
    

    cin >> a ;

    for(i=0;i<a;i++){
        cin >> b ;
        int c[b];
        for(j=0;j<b;j++){
            cin >> c[j] ;
            d = d+ c[j];
        }
        d = d - b + 1 ;
        cout << d << endl ;
        d = 0 ;
    }

   
}