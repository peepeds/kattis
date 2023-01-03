#include <iostream>
using namespace std ; 

int main(){
    int a  , tot = 0; 
    cin >> a ;
    char c[a];

    for(int i = 0 ; i <a ; i++){
        cin >> c[i] ;
        if(i>0){
            if(c[i]==c[i-1]){
                tot++;
            }
        }
    }
    cout << tot << endl ;
   
  
}