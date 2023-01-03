#include <iostream>
#include <cstring>
using namespace std ;

int main(){
    int a,i ;
    char str[500];

    cin >> str;
    a = strlen(str);
    for(i=0;i<a;i++){
        if(str[i]>= 'A' && str[i] <='Z'){
            cout << str[i];
        }
    }
    cout << endl ;
}