#include <iostream>
#include <cstring>


using namespace std ; 

int main(){
    string s , s1 ,s2 ,s3 ;
    int len , a ,x; 

    cin >> s ; 
    len = s.length(); 
    a = len / 3 ;
    s1 = s.substr(0,a);
    s2 = s.substr(a,(a));
    s3 = s.substr(len - a,a);

    if((x=s1.compare(s2))==0){
        cout <<s1  << endl;
    } else if((x=s1.compare(s3))==0){
        cout <<s3 << endl ;
    } else if((x=s2.compare(s3))==0){
        cout  <<s2 << endl ;
    }
}  