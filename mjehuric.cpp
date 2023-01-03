#include <iostream>
using namespace std ;

int main(){
    int a[5];
    for(int j = 0 ; j < 5 ; j++){
        cin >> a[j] ; 

        if(a[j]> a[j+1]){
            int tmp = a[j];
            a[j] = a[j+1];
            a[j+1] = tmp ;
        }

        cout << a[j] ;
    }
    

    
}