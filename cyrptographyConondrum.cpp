#include <iostream>
#include <cstring>
using namespace std ;

int main(){
    string s ;
    int len , i , tot = 0 ;

    cin >> s ; 
    len = s.length();
    for(i=0 ; i < len  ; i++){
        if(i%3==0){
            if(s[i]!='P'){
                tot++;
            }
        } else if (i%3==1){
            if(s[i]!='E'){
                tot++;
            }
        } else if (i%3==2){
            if(s[i]!='R'){
                tot++;
            }
        }
    }
    cout << tot << endl ;
}