#include <iostream>
using namespace std ; 

#define max 8 
#define min 1 

int main(){
    int a , b , set = 0 , i = 0   , d; 
    char c ; 
    cin >> a ; 
    cin >> b ;

    for(i=0 ; i < b ;i++){
        cin >> d >> c ; 
        set += d ;
        if(c=='T'&& set <= 210){
            a++ ; 
            if(a< min ){
                a = max ;
            } else if ( a > max ){
                a = min ;
            }
        }
    }

    cout  <<  a << endl ;


}