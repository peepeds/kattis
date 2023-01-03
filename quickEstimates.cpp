#include <iostream>
using namespace std ;

int main(){
    long long unsigned int a , b , i , tot = 0 ; 

    cin >>  a ;

    for(i=0 ; i < a ;i++){
        cin >> b ; 
        if(b ==0){
            tot++;
        }
        while (b!=0){
            b/=10 ; 
            tot++;
        }
        
        cout << tot << endl ; 
        tot = 0 ;
    }
}