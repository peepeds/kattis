#include <iostream>
#include <cstring>

using namespace std ; 

int main(){
    int i =0 , fbi= 0  , len[5] = {0} ; 

    string s[5] ; 
    for(i=0;i<5;i++){
        cin >> s[i] ; 
        len[i] = s[i].length() ; 
        for(int j =0 ; j < len[i] ; j++){
            if(s[i][j]=='F'){
                if(s[i][j+1]=='B'){
                    if(s[i][j+2]=='I'){
                        j= len[i] - 1 ;
                        fbi++;
                        cout << i+1 << endl ;
                    }
                }
            }
        }
    }
    if(fbi==0){
        cout <<"HE GOT AWAY!" << endl ; 
    }
}