#include <iostream>
#include <cstring>
using namespace std ; 

int main(){
    string s ; 
    double len , i , c = 0 , x = 1 , y = 0 , d=0;
    
    
    cin.ignore();
    getline(cin,s);
    len = s.length();
   
    for(i=0 ; i < len ;i++){
        if(s[i]=='a'){
            if(s[i+1]=='e'){
                c+=1;

            }
        } else if(s[i]==' '){
            x++ ;
        }
    }
    y = c / x ;
    
  
   
    
    if(y>=0.4){
        cout << "dae ae ju traeligt va" << endl ;
    } else {
        cout << "haer talar vi rikssvenska" << endl ;
    }
}