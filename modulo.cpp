#include <iostream> 
using namespace std ;

int main(){
    int  a[10],i , j , k  , counter= 0;

    for(i=0 ; i < 10 ; i++){
        cin >>a[i];
        a[i] %= 42 ;
    }

    for(i=0 ; i < 9 ;i++){
        for(j=i+1 ; j < 10 ; j++){
            if(a[i]>a[j]){
                int tmp = a[i];
                a[i]= a[j];
                a[j] = tmp ;
            }
        }
    }
    for(i=0 ; i < 10;i++){
        if(a[i]!=a[i+1]){
            counter++;
        }
    }
    cout << counter << endl ;

}