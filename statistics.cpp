#include <iostream>
using namespace std ; 

int main(){
    long int max , min  , n , i , range  , j  , x ; 
    for(i= 1 ; cin >> n ; ++i){
        for(j=0 ; j < n ; ++j){
            cin >> x ; 
            min = x < min ? x : min;
            max = x > max ? x  : max;
        }
        cout << "Case " << i << ": " << min << " " << max << " " << max-min << endl;
    }
}