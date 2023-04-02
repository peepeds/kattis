#include <iostream>
using namespace std ; 

int main(){
    int a ,i , c; 
    cin >> a ; 
    int b[10];

    for(i = 0 ; i < a ;i++){
        cin >> b[i];
    }
    for(i = 0; i < a ;i++){
        if(b[i]== b[i+1]){
            c = i +1 ; 
            break;
        }
    }
    cout << c << endl ;
}