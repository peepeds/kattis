#include <bits/stdc++.h>
#include <cstring>
using namespace std ; 

int main(){
    string s ; 
    double a  , len ; 
    cin >> s >> a ; 
    len = s.length();
    (len < a ) ? printf("%f\n",len) : printf("%.12lf\n",a) ;
    
}