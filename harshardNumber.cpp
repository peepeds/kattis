#include <iostream>
using namespace std ; 

int main(){
    long long  int a , b, tot = 0 , c; 
    
    cin >> a ; 
    c = a ;

    while (a!=0){
        b = a % 10 ;
        tot += b ; 
        a/=10 ;
      
    }
    
    if(c%tot==0){
        cout << c << endl ;
    } else {
        while(1){
            c++;
            tot++;
          
            if(c %tot ==0){
                cout << c << endl ;
                return 0 ;
            }
        }
    }
}