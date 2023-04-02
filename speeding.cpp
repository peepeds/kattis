#include <iostream>
using namespace std ; 

int main(){
    int a  , tot =0 , total = 0, i ; 

    cin >> a ; 
    int b[a],c[a] , x , y;
    for(i=0;i<a;i++){
        cin >> b[i] >> c[i] ; 
        if(i>0){
            x = b[i] - b[i-1];
            y = c[i] - c[i-1];
            tot = y / x ;
            if (tot > total ){
                total = tot ;
            }
        }
    }
    cout <<total << endl ;
} 