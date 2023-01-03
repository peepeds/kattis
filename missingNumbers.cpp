#include <iostream>
using namespace std ; 

int main(){
    int a , b , i  , salah =0; 

    cin >> a ; 

    for(i=1;i<a+1;i++){
        cin >>  b ;
        if(i==b){
            continue;
        } else { 
         
            i++;
            cout << i-1 << endl ;
            salah++ ;
            a++;
        }
    
    }
    if ( salah ==  0 ){
        cout << "good job" << endl ;
    }
}