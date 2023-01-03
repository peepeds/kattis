#include <iostream>
using namespace std;

int main(){
    int a,d=0,e,i,j;
    cin >> a ;
    int b;
    int c;
    for(i=0;i<a;i++){
        cin >>b;
        d+= b;
    }
     for(j=0;j<a-1;j++){
        cin >>c ;
        d-= c;
    }
    cout << d << endl ;
}