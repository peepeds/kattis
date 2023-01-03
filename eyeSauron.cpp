#include <iostream>
#include <cstring>
using namespace std ;

int main(){
    string s ; 
    cin >> s ;
    int len = s.length()  , c = 0;
  
    if(len%2 == 1){
        cout << "fix"<< endl ;
        return 0 ;
    }
    for(int i=0 ; i < len ; i++){
       
        if(i== len / 2 -1){
            if(s[i]=='('){
                c++;
              
            }
        } else if(i==len / 2 ){
            if(s[i]==')'){
                c++ ; 
               
            }
        } 
    }
    if(c!=2){
        cout << "fix" << endl ;
    } else {
        cout << "correct" << endl ;
    }
}