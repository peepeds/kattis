#include <iostream>
#include <cstring>

using namespace std  ; 

int main(){
    string s  ,s1; 
    int len , i ; 

    cin >>s ;
    s1 = s ; 

    len = s.length();

    for(i=0 ; i < len - 1;i++){
        for(int j=i+1 ; j < len ;j++){
            if(s[i]>s[j]){
                char tmp =  s[i];
                s[i] = s[j];
                s[j] = tmp ;
            }
        }
    }
    if(s1!=s){
        cout <<  '0' << endl ;
    } else {
        cout  << s1  << endl;
    }
}