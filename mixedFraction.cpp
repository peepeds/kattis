#include <iostream>
using namespace std ; 

int main(){
    int a , b , c, d; 

    do {
        cin >> a >> b ; 
        if(a == 0 && b == 0 ){
            break ;
        } else {
        c = a / b; 
        d = a % b ;

        cout << c << ' ' << d << " / " << b  <<endl ;
        }

    } while ( a+b != 0);
}   