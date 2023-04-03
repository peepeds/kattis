#include <iostream>
using namespace std ; 

int main(){
    int tot = 0 ; 
    int n  , i  , x  , tmp =0 ; 
    cin >> n ; 
    for(i=0 ; i < n ; i++){
        cin >> x  ; 
        if (x > tmp){
            tot++ ;
            tmp = x ; 
        }  else if ( x <= tmp){
            tmp = x ; 
        }
    }
    cout << tot  << endl; 
}