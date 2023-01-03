#include <iostream>
using namespace std ; 

int gcd(int a, int b ){
    if (a==0) return b  ; 
    if (b ==0) return a ;
    return gcd(b,a%b);
}
int main(){
    int a ; 
    cin >> a ; 
    int i  , s[a]  , x , y , z; 

    for(i=0;i<a;i++){
        cin >> s[i] ;
    }
    for(int j =1; j < a ; j++){
        x = gcd(s[0],s[j]);
        y = s[0] / x ;
        z = s[j] / x ; 
        cout << y << '/' << z << endl ;
    }
}