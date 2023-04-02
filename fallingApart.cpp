#include <iostream>
using namespace std ;

int main(){
    int a ,  tot =0 , total =0; 
    double c ;
    cin >> a ; 
    int b[a],i;
    for(i=0 ; i < a ;i++){
        cin >> b[i];
    }
    if(a%2==0){
        c = a/2 ;
    } else {
        c = a/2 + 1 ;
    }
   
    
    for(i=0 ;i <= a ;i++){
        if(i<c){
            tot += b[i];
        } else {
            total += b[i];
        }
    }
    cout << tot <<' ' << total << endl ;
}