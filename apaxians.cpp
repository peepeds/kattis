#include <iostream>
#include <cstring>
using namespace std ;


int main (){
    char str[250] , tmp ; 
    int a , i =0 ;

    scanf("%s",str);
    a = strlen(str);
    for(i=0;i<a;i++){
        if(str[i]!=str[i+1]){
            cout << str[i];
        }
    }
    cout << endl;
    return 0 ;
}