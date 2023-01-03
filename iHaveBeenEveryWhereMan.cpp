#include <iostream>
#include <string.h>
using namespace std ; 

int main(){
    int i , a  , b ,j , k , l ,  c = 0; 
    cin >> a ; 
    
    for(i=0;i<a;i++){
        cin >> b ; 
        string s[b];
        for(j=0 ; j < b ;j++){
            cin >>s[b];
        }
        for(k=0 ; k < b -1 ; k++){
            for(l=k+1;l<b;l++){
                if(strcmp(s[k],s[l])){
                    string  tmp ; 

                }
            }
        }
    }
}