#include <iostream>
#include <string.h>
using namespace std ; 

int main(){
    int i , len ; 
    char str[200];

    cin >> str ;
    len = strlen(str);

    for (i=0;i<len/3;i++){
        cout << str[i];
    }
    cout <<endl ;
}