#include <iostream>
using namespace std ; 

int main(){
    int a  , i , test ;

    cin >> a ; 
    int c[a]; 
    for(i=0 ; i < a ; i++){
       
        if(i==0){
            cin >> test ;
           
        } else {
            cin >> c[i];
            if(c[i]% test == 0){
                cout << c[i] << endl ;
                a = a - i - 1;
                i = -1 ;
            }
        }
       
    } 
}