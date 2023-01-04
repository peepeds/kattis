#include <iostream> 
using namespace std ; 
#include <cstring>

int main(){
    int a  , tot , i , len;
    cin >> a ; 
    
    tot = a ;
    string s[a];
    for(i = 0 ; i < a ; i++){
        cin >> s[i];
        len = s[i].length();
        for(int j = 0 ; j < len ; j++){
            if((s[i][j]=='C')&&(s[i][j+1]=='D')){
                tot--;
            }
        }
    }
    cout << tot << endl ;
}