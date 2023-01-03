#include <iostream>
using namespace std; 

int main(){
    int a , i;
    int counter = 0 ;
    double b , tot = 0 ;
    cin >> a ;

    for(i=0;i<a;i++){
        cin >> b ;
        if(b==-1){
            counter++;
            b = 0 ;
        }
        tot +=b ;

    }
    tot = tot / (a-counter);
    cout << tot << endl ;

    return 0 ;
}