#include <iostream>
using namespace std ; 

int main(){
    int a , b , c , i , tmp , con = 0;

    cin >> a ; 
    for(i=0 ;i < a ;i++){
        cin >> b ;
        
        for(int j = 1 ; j <= b ;j++){
            if(j==1 && con ==0){
                cin >> c ;
                tmp = c+1;
            } else if (j != 1&& con == 0) {
                cin >> c ; 
                if( c!= tmp){
                    cout << j << endl ;
                  
                    con++;
                }
                tmp = c+1 ;
            } else if (j != b && con == 1) {
                cin >> c ;
            } else {
                cin >> c ;
                con = 0 , tmp = 0 ;
            }

        }
    
    }
}