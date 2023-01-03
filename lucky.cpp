#include <iostream>
using namespace std ; 
#include <string.h>

int main(){
    char s[110];
    int len , i , c=0 ;
    cin >> s;
    len = strlen(s);
    for(i=0;i<len;i++){
        if(s[i]=='4'|| s[i]=='7'){
            c++;
        }
    }
    if(c==7 || c == 4){
        cout << "YES" << endl ;
    } else {
        cout << "NO" << endl ;
    }
}