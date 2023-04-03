#include <iostream>
#include <cstring>
using namespace std ; 

int main(){
    string s , x  ;
    int i  ;  
    getline(cin , s) ;  
    int len = s.length();
 
    for(i=0 ; i < len ; i++){
        if(s[i]!=s[i+1]){
            x += s[i];
        }
    }
    cout << x << endl ; 
}