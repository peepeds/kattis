#include <iostream>
#include <cstring>
using namespace std ; 

int main(){
    string s ; 
    long long unsigned int  a , len ,i ; 

    cin >> a ; 

    for(i =0 ; i < a ;i++){
        cin >> s ; 
        len = s.length();
        cout << len  << endl ;
    }
}