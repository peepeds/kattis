#include <iostream>
#include <string.h>

using namespace std ; 

int main(){
    int a  , i , j , c =0, tot=0; 
    cin >> a ; 

    char s [a][1100]; 
    for(i=0;i<a;i++){
        cin >> s[a];
        int len = strlen(s[a]);
        for(j=0 ; j < len ; j++);
        if(s[a][j]=='C'&& s[a][j+1]=='D'){
            c = c ;
        } else {
            c++;
        }
        if(c == len){
            tot++;
        } else {
            tot = tot ;
        }
    }
    cout << tot << endl ;
}