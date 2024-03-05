#include <iostream>
#include <algorithm>
using namespace std ; 

int main(){
    int many , half , x , total = 0 ; 
    int tmp;
    cin >> many ; 
    half = many / 2 ; 

    int arr[many];

    for(int i = 0 ; i < many ; i++){
        cin >> x ; 
        arr[i] = x ; 
    }
    sort(arr , arr+many);
    for(int i =0 ; i <= half ; i++){
        tmp = arr[i];
        total+= tmp / 2 ;

       
    }
   
    for(int i = half+1; i < many ; i++){
        total += arr[i];
        
    }

    cout << total << endl ;
    

}