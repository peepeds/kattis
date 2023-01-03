#include <iostream>
using namespace std ;

int main(){
    long long unsigned int a , b , i , c=0;

    cin >> a ;

    for(i=0;i<a;i++){
        cin >>b ;
        b == 0 ? c= 1 : c = c ;
        while ( b!=0){
         
            b/=10;
            c++;
        }
       

        cout << c << endl ;
        c = 0 ;
    }
}