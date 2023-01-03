#include <iostream>
#include <cstring>
using namespace std ; 

int main(){
    string s ; 
    double len , white = 0 , lower = 0 , upper = 0 , special  = 0 ,i ; 

    cin >> s ; 
    len =s.length(); 
    for(i=0 ; i < len ; i++){
        if(s[i]=='_'){
            white++;
        } else if(s[i]>=97 && s[i]<= 122){
            lower++;
        } else if(s[i]>=97 - 32&& s[i]<= 122 - 32){
            upper++;
        } else {
            special++; 
        }
    }
    cout << white / len << endl << lower / len << endl << upper / len << endl  << special / len << endl ;
    
}