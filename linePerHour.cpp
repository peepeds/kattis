#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n , perHour , hour =5 , total  , counter = 0; 
    int x;

    cin >> n  >> perHour; 
    total = perHour * hour;
    int arr[n];

    for(int i =0 ; i < n ; i++){
        cin >> x ; 
        arr[i] = x ;
    }
    sort(arr, arr+n);

    for(int i =0 ; i < n ;i++){
        if(total - arr[i] >= 0){
            total -= arr[i];
            counter++;
           // cout << counter << endl; ; 
        } else {
            break;
        }
    }

    cout <<  counter << endl;
}