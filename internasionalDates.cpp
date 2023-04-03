#include <iostream>
using namespace std ; 

int main(){
    string s ; 
    int s1 , s2 , s3  , tot = 0; 
    scanf("%d/%d/%d",&s1,&s2,&s3);

    if(s1 > 12){
        tot = 1;
    }
    if(s2 > 12){
        tot = 2 ; 
    }

    if(tot == 0){
        cout << "either\n" ; 
    } else if (tot == 1) {
        cout << "EU\n" ;
    } else if ( tot == 2){
        cout << "US\n";
    }

}
