#include <iostream>
#include <string.h>
using namespace std ;

int main(){
    char s [400];
    int a = 0 ;int b = 0 ;

    cin >> s ; 
    int len = strlen(s);
    int i ;
    for(i=0;i<len;i=i+2){
        if(s[i]=='A'){
            if(s[i+1]=='1'){
                a++;
            } else {
                a=a+2;
            }
        } else if(s[i]=='B'){
            if(s[i+1]=='1'){
                b++;
            } else {
                b = b+2 ;
            }
        }
    }
    a > b ? cout <<'A' : cout << 'B' ; cout << endl ;
}