#include  <iostream>
using namespace std  ; 

 

int main(){
    int a , b , c , tot = 1, i , tmp  = 0; 

    cin >> a ; 
    for(i=0;i<a;i++){
        cin >> b >> c ; 
        if(i==0){
            
            if(b==c){
                tot--;
            }
        }
        if(b == c){
            tot++;
        } else if ( tmp == c){
            tot++;
        } else if(b > tmp){
            tmp = b ;
            tot += c - tmp ;
        }
        
        
        
    }
    if ( tot > 365){
        tot = 365 ;
    }
    cout << tot  << endl ;
}