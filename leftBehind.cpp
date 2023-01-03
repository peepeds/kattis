#include <iostream>
using namespace std ; 

int main(){
    int a , b , c = 0 ;

    do{
        cin >> a >> b ;
        c = a + b ;
        if( a == 0 && b == 0 ){
            break ;
        } else if (c == 13){
            cout << "Never speak again." << endl ;
        }else if ( a == b){
            cout << "Undecided." << endl;
        } else if ( a < b ){
            cout << "Left beehind." << endl;
        } else if ( a > b){
            cout << "To the convention." << endl ;
        } 
    } while ( c != 0);
}