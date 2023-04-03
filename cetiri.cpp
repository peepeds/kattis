#include <iostream>
using namespace std ; 

int main(){
    int a , b , c  ,  i  , tmp  , j  ; 
    int arr[3];
    int dif , dif1 , dif2 ; 
    cin >> arr[0] >> arr[1] >> arr[2] ; 

    for(i=0 ; i < 2 ; i++){
        for(j = i + 1 ; j < 3 ; j++){
            if(arr[i] > arr[j]){
                tmp = arr[i] ;
                arr[i] = arr[j] ; 
                arr[j] = tmp ; 
            }
        }
    }
    a = arr[0] , b = arr[1] , c = arr[2] ; 
    dif1  = b - a ; 
    dif2  = c - b ; 
    if (dif1 > dif2){
        dif = dif2 ; 
    } else {
        dif = dif1 ; 
    }
    
}