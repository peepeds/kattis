#include <iostream>
using namespace std ; 

int main(){
    int a , b , i ; 

    cin >> a ; 
    for(i=0 ; i < a ;i++){
        cin >> b ; 
        if(b%400!=0){
            b+=400 ;
        }
        b/= 400 ; 
        cout << b  << endl;
    }
}