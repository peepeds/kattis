#include <iostream>
using namespace std ; 

int main(){

    int a  , b  , i , tmp = 0, total = 0;
    

    do{
        cin >> a ;
        int c[a];
        for(i=0;i<a;i++){
            cin >> b >> c[i] ; 
            total = total + (b * (c[i] - tmp));
            tmp = c[i];
        }
        if(a>0){
            cout << total << " miles" << endl ;
        }
        tmp = 0;
        total = 0;
    } while (a!= -1);

    return 0 ;
}