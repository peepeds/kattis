#include <iostream>
#include <math.h>
using namespace std ; 

int main(){
    int x  , y , tot ; 
    cin >> x >> y ; 
    tot = y - x ; 
    if(tot >=0){
       cout << "Dr. Chaz will have " << tot <<" pieces of chicken left over!\n";
    }else {
        tot = abs(tot);
        cout << "Dr. Chaz need " << tot <<" more pieces of chicken!!\n";
    }
}              