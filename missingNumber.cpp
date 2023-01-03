#include <iostream>
using namespace std ; 

int main(){
    int a  , i  , b  ,c = 0; 

    cin >> a ;
    for(i=1 ; i <= a ; i++){
        cin >> b  ; 
        while (b!=i){
            cout << i  << endl ;
            i++ ;
            a++;
            c++ ;
        } 
    }
    if(c==0){
        cout << "good job" << endl ;
    }
}