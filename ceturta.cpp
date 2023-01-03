#include <iostream>
using namespace std ; 

int main(){
    int a , b[3] , c[3] , i , j , k; 
    int x , y ;

    for(i=0;i<3;i++){
        cin >> b[i] >> c[i];

        for(j=0;j<4;j++){
            for(k=0;k<i;k++){
                if(b[k]>b[k+1]){
                    int tmp = b[k];
                    b[k] = b[k+1];
                    b[k+1] = tmp ;
                }
                if(c[k]>c[k+1]){
                    int tmp = c[k];
                    c[k] = c[k+1];
                    c[k+1] = tmp ;
                }
               
            }
        }
    
    }

    if(b[0]==b[1]){
        x = b[2];
    } else if (b[1]==b[2]){
        x = b[0];
    }
    if(c[0]==c[1]){
        y = c[2];
    } else if (c[1]==c[2]){
        y = c[0];
    }

    cout << x << ' ' << y << endl ;
}