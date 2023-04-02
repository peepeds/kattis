#include <iostream>
#include <cstring>
using namespace std ; 

int main(){
    int a  , len , i , j , paro  , c =0; 
    string s ;
    cin >> a; 
    
    for(i=0 ; i < a ;i++){
        cin >> s ; 
        len = s.length();
        paro = len / 2 ;
        if(len%2==1){
            cout << "NO" << endl ;
        } else {
            for(j=0;j<paro ; j++){
                if(s[j]==s[j+paro]){
                    c  = c ;
                } else {
                    c++;
                }
            }
            if(c==0){
                cout <<"YES" << endl ;
                c = 0 ;

            } else {
                cout << "NO" << endl ;
                c = 0 ;
            }
        }
    }
}