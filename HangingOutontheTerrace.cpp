#include <iostream>
#include <string.h>
using namespace std ; 

int main(){
    int a , b, c ;
    int set = 0 ; 
    int anomali = 0;
    cin >> a >> b ;
    char s[12];
    int i ;

    for(i=0;i<b;i++){
        cin >> s >> c ; 

        if(strcmp("enter",s)==0){
            set+= c ;
            cout << set  << endl;
        } else {
            set-= c ;
            cout << set  << endl;
        }
        if(set > a){
            anomali+= 1 ;
            set -= c ;
        }
    }

    cout << anomali << endl;
}