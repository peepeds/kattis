#include <iostream>
#include <math.h>
using namespace std ; 

int main(){
    int x  , y , tot ; 
    cin >> x >> y ; 
    tot = y - x ; 
    if(tot >=0){
        if(tot > 1){
            cout << "Dr. Chaz will have " << tot <<" pieces of chicken left over!\n";
        } else {
             cout << "Dr. Chaz will have " << tot <<" piece of chicken left over!\n";
        }
    }else {
        tot = abs(tot);
        if(tot > 1){
            cout << "Dr. Chaz needs " << tot <<" more pieces of chicken!\n";
        } else {
            cout << "Dr. Chaz needs " << tot <<" more piece of chicken!\n";
        }
    }
}              