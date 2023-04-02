#include <iostream>
using namespace std ; 

int main(){
    long int a , b , c ,d , x  ; 
    long int maxX , maxY ; 
   
    cin >>  x>> a >> c ; 
    b = x - a ; 
    d = x - c ; 
   
    if(a > b ){
        maxX = a ; 
    } else if (b > a || b == a){
        maxX = b ;
    }
   
    if(c > d){
        maxY = c ; 
    } else if (d > c || d == c){
        maxY = d;
    }
    
   cout << maxX * 4 * maxY << endl  ;
}
