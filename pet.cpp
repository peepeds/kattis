#include <iostream>
using namespace std ; 

int main(){
    int i ; 
    int a , b ,c ,d ; 
    int total = 0 ,tot = 0 ,set = 0;

    for(i=1;i< 5+1; i++){
        cin >> a >> b >> c >> d ;
        tot = a + b + c + d ;
        if(tot > total ){
            total = tot ;
            set = i ;
        }
    }
    cout << set << ' ' << total << endl ;
}