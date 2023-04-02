#include <iostream>
using namespace std ; 

int main(){
    int a , b , c ,d=0; 
    cin >> a >> b >> c ;

    while(a>=c){
       a/=c;
       b++;
       d++;
    }
    cout << b  << endl ;
    while(b>=c){
        b/=c;
        d++;
    }
      
    cout << d << endl;
}