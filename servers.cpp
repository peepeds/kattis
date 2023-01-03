#include <iostream>

using namespace std  ; 

int main(){
    int a  , b  ,counter =0, total = 0; 

    cin >> a >> b ; 
    int c[a]; 
    for(int i = 0 ; i < a ; i++){
        cin >> c[i]; 
        if(counter < b){
            counter += c[i];
            total++ ;
            if(counter > b){
                total--;
            }
        }
    }

    cout << total << endl ;
}