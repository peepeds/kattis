#include <iostream>
#include <cstring>

using namespace std ;

int main(){
    int i , len  ; 

    string s ; 

    cin  >> s ;
    len = s.length();

    for(i=0;i<len;i++){
        if(s[i]==':'){
            if(s[i+1]==')'){
                cout << i  << endl;
            } else if(s[i+1]=='-'){
                if(s[i+2]==')'){
                    cout << i << endl ;
                }
            }
        } else if(s[i]==';'){
            if(s[i+1]==')'){
                cout << i << endl ;
            } else if (s[i+1]=='-'){
                if(s[i+2]==')'){
                    cout << i << endl ;
                }
            }
        }
    }
}