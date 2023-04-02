#include <iostream>
#include <string>
using namespace std ; 

int main(){
    string s ,s1 , res ; 
    cin  >> s >> s1 ; 
    res = s +s1 ; 
    cout << res << endl ;
    char tmp ; 
    for(int i = 0 ; i < res.length() -1 ; i++){
        for(int j = i + 1 ; j < res.length() ; j++){
            if(res[i] > res[j]){
                tmp = res[i];
                res[i] = res[j];
                res[j] = tmp ; 
            }
        }
    }
    cout << res << endl ;
}