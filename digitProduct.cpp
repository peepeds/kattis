#include <iostream>
#include <cmath>
using namespace std  ; 

int main(){
    long unsigned int x , tmp =1 ;
    int len  , c , count;  
    cin >> x ; 
    do{
        do {
            x /= 10;
            ++count;
        } while (x != 0);
        x--;
        for(int i =0 ; i < x ; i++){
            tmp *= x[i];
        }
    } while (x > 9);
}