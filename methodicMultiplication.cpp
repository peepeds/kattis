#include <iostream>
#include <cstring>
using namespace std ; 
int p(int a){
    int c = 0 ;
    while( a> 1){
        a -= 3;
        c++ ;
    }
    return c ;
}
int main(){
    string s , s1  ,x , y;
    cin >> s >> s1 ; 
    int len , len1 ; 

    len = s.length();
    len1 = s1.length();
    x = p(len);
    y = p(len1);

    cout << x << ' ' <<  y << endl ;

}