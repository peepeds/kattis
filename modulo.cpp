#include <iostream>
#include <algorithm>
using namespace std ;

int main(){
    int a[10] = {0} , j , k;
    int counter  = 0 ,c;
   
    for(int i = 0 ; i < 10 ;i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0 ; i < 10 ;i++){
        a[i]  %= 42 ; 
        sort(a,a+10);
        if(a[i]==0){
            a[i] = 1 ;
        }
    for(int j = 0 ; j < 10 ; j++){
        cout << a[j] <<' ' ;
    }
        if(a[i]> counter){
            counter++ ;
        }
    }
   // cout << counter << endl ;
}