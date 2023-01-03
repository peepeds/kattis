#include <iostream>
using namespace std ; 

int main(){
    int a , b , c , i ;

    cin >> a ;

    for(i=0;i<a;i++){
        cin >> b >> c ; 
        char s[b][c];
        for(int j = 0 ; j < b ;j++){
            for(int k = 0 ; k<c;k++){
                cin>> s[j][k];
            }
        }

        for(int j = 0 ; j <b ;j++){
            for(int k = 0 ; k <c ;k++){
                cout << s[j][k];
            }
            cout << endl ;
        }
    }
}