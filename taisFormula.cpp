#include <iostream>
using namespace std ; 

int main(){
    double a , i  , tot = 0 ; 
    cin >> a; 
    double b[1000] , c[1000]; 

    for(i = 0 ; i  < a ; i++){
        cin >> b[i] >> c[i];
    }
    for(i=1 ; i < a ;i++){
        tot+=((b[i]+b[i-1]*2))*(c[i]-c[i-1]);
    }
    cout << tot << endl ;
}