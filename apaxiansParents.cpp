#include <iostream>
#include <cstring>
using namespace std ; 

int main(){
    string s , s1 ; 
    int len  , i; 

    cin >> s >> s1 ; 
    len = s.length();
    
    for(i=0 ; i<len;i++){

        
        if(i==len-2){
            if(s[i]=='e'&& s[i+1]=='x'){
                cout << s <<s1 << endl ;
                return 0 ;
                
            }
        } else if (i == len-1){
            if(s[i]=='e'){
                cout << s <<  'x'<<s1 << endl ;
                return 0 ;
            }
            if(s[i]=='a'||s[i]=='i'||s[i]=='u'||s[i]=='o'){
                s[i]= 'e';
                cout << s << 'x' << s1 << endl ;
                return 0 ;
            } else {
                cout << s <<"ex" <<s1 << endl ;
                return 0 ;
            }

        } 
        
        
    }
}