#include <iostream>
using namespace std ; 

int main(){
    int x; 
    cin >> x;
    char pattern = '-';
    x++;
    for(int i = 0 ; i <= x ; i++){
        for(int j = 0 ; j <= x ; j++){
            if((j==0 || j == x) && (i==0 || i == x)){
                cout <<"+";
            }else if(i==0 || i == x){
                pattern = '-';
                cout << pattern;
            } else if( j==0 || j == x) {
                pattern = '|';
                cout << pattern;
            } else {
                pattern = ' ';
                cout << pattern;
            }

        }
        cout << endl ;
    }
    
}