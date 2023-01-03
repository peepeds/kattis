#include <iostream>
using namespace std ;

int main(){
    int a,b,i,c=0;
    cin >> a ;
    for(i=0;i<a;i++){
        cin >> b ;
        c+=b ;
    }
    c-= a-1 ;
    cout << c << endl ;
}