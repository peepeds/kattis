#include <iostream>
#include <string.h>
using namespace std ; 

int main(){
    char s[1000000];
    int b = 0 , w = 0 ;
    
    cin >> s ; 

    int len = strlen(s);
    int i ; 

    for(i=0;i<len;i++){
        if(s[i]=='B'){
            b++;
        } else {
            w++;
        }
    }

    b == w ? cout << 1 : cout << 0 ; cout << endl ;
}