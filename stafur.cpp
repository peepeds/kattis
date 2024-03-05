#include <iostream>
using namespace std;

int main(){
    char x ; 
    cin >> x ;
    string vowel = "AIUEO";

    if(vowel.find(x)!= string::npos){
        cout << "Jebb\n";
    } else if( x == 'Y'){
        cout << "Kannski\n";
    } else {
        cout << "Neibb\n";
    }
}