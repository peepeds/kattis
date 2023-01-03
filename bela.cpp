#include <iostream>
#include <cstring>
using namespace std ; 

int main(){
    int a , i , tot = 0 ; 
    char x ; 
    cin >> a  >> x ; 
    a*= 4 ;
    string s[a] ; 
    for(i = 0 ; i < a ; i++){
        cin >>  s[i]; 
    }
    for(i=0 ; i < a  ; i++){
        if(s[i][0]=='A'){
            tot+= 11 ;
        } else if(s[i][0]=='K'){
            tot += 4 ;
        } else if(s[i][0]=='Q'){
            tot += 3 ;
        } else if(s[i][0]=='J'){
            if (s[i][1]==x){
                tot += 20 ;
            } else {
                tot += 2 ;
            }
        } else if(s[i][0]=='T'){
            tot += 10 ;
        } else if(s[i][0]=='9'){
            if(s[i][1]==x){
                tot +=  14 ;
            } else {
                tot += 0 ;
            }
        } else { 
            tot+= 0 ;
        }
    }
    cout << tot << endl ;
}