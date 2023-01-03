#include <iostream>

using namespace std ; 

int main(){
    long int a ,b ,hari; 
    cin >>  a ; 
    long int i = 0  ,t=1000000;

    for(i=0;i<a;i++){
        cin >> b ; 
        if(b<t){
            t = b ;
            hari = i ;

        }
    }

    cout << hari << endl ;
}