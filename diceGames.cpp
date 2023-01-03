#include <iostream>
using namespace std ; 

int main(){
    int a[4] = {0};
    int b[4] = {0};
    int x = 0 , y = 0 ;

    for(int i = 0 ; i < 4 ;i++ ){
        cin >> a[i];
        x+= a[i];
    }
    for(int i = 0 ; i < 4 ;i++ ){
        cin >> b[i];
        y+= b[i];
    }

    if(x<y){
        cout << "Emma"  << endl ;
    } else if ( x > y){
        cout << "Gunnar" << endl ;
    } else {
        cout << "Tie" << endl ;
    }
}