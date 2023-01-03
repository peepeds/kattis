#include <iostream>
using namespace std ; 

int main(){

    int a , b , c , i ;

    cin >> a >> b ; 
    for(i=1;i<a+1;i++){
        cin >> c ; 

        if(i%b==0){
            cout << c << ' ' ;
        }

    }
    cout << endl ;
}