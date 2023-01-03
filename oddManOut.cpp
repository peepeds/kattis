#include <iostream>
using namespace std ; 

int main(){

    int a , b , i , j , k , l ; 
    cin >> a ; 

    for( i = 0 ; i <a ;i++){
        cin >>  b ; 
        int c[b];
        for(j=0 ; j < b ;j++){
            cin >> c[j];
            for(k = 0 ; k < b -1 ; k++){
                for(l = k +1 ; k < b ;l++){
                    if( c[k] > c[l]){
                        int tmp = c[k]; 
                        c[k]= c[l];
                        c[l] = tmp ;
                    }
                }
            }
            for ( int m = 0 ; m < b ; m++){
                if(c[m]==c[m+1]){
                    c[m] = 0 ; 
                    c[m+1]= 0 ;
                }
            }
            for ( int n = 0  ; n < b ; n++){
                cout << c[n] << ' ' ;
            }
            cout << endl ;
        } 
    }
    
}