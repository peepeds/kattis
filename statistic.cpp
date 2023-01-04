#include <iostream>

using namespace std ;

int main(){
    int a , i  , n =1 , min = 1000001, max = 0, range ;
    do{
   
        cin >> a ;
        int b[a];
        for(i=0 ; i < a ;i++){
            cin >> b[i];
        }
        for(i=0 ; i < a ;i++){
           if(b[i]>max){
            max= b[i];
           }
           if(b[i]<min){
            min = b[i];
           }
           range= max - min ;

        }
        printf("Case %d: %d %d %d\n",n,min , max, range);
        min = 1000001 , max = 0 , range = 0 ;
        n++;

    } while(n != 10);
}// Case 1: 4 10 6