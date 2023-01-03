#include <iostream>
using namespace std ; 

int main(){
    int len , i  , c = 0; 
    string s , s1 ; 
    cin >> s ; 
    len = s.length();

    for(i=0;i<len;i++){
        if(s[i]!='a'){
            c++;
        } else {
            break ;
        }
    }
   
    s1= s.substr(c,len);

    cout << s1 << endl ;
}