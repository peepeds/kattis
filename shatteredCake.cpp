#include <iostream>
using namespace std ;    


int main(){
    int  p , l , tot = 0 , a , b , c ,  i; 

    cin >> p  >> a ;
    
    for(i=0 ;i < a ; i++){
        cin >> b >> c ; 
        tot+= b * c ;
    }

    l = tot / p ; 
    cout << l << endl ;
}