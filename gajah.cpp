#include <iostream>
using namespace std ;

int main(){
    int x ; 
    int counter = 0;
    cin >> x ;

    while(x>0){
        x= x - 5 ;
        counter++;
    }


    if(x>0){
        counter++;
    }

    cout << counter << endl ;
}