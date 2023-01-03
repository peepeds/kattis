#include <iostream>
#include <cmath>
using namespace std ;

int main(){
    long int a , b[20001] ,c=0, i ;
    cin >> a;
    for(i=0;i<a;i++){
        scanf("%ld",&b[i]);
        if(b[i]<0){
            c = c + b[i];
        }
    }
    c = abs(c);
    cout << c << endl ;
    return 0 ;
}