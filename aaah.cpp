#include <iostream>
#include <string.h>
using namespace std ;

int main(){
    char a[1000] , b[1000];
    int lena,lenb;
    cin >> a ;
    cin >> b ;
    
    lena = strlen(a);
    lenb = strlen(b);
    
    if(lena < lenb){
        cout << "no" << endl ;
    } else {
        cout << "go" << endl ;
    }
    return 0;
}