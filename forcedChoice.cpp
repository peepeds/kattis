#include <iostream>
using namespace std ; 

int main(){
    int many , predict , step ; 
    cin >> many >> predict  >> step ; 
    int arr[many] , i , j  ; 
    int checker  = 0 ; 
    int guess ;
    for(i=0  ; i < step ; i++){
        cin >> guess ; 
        int tmp[guess]; 
        for(int j = 0 ; j < guess ; j++){
            cin >> tmp[j] ; 
          
            if(tmp[j] == predict){
                checker++ ;
            } else {
                checker = checker ; 
            }
        }
        if(checker >0){
            cout <<"KEEP\n";
        } else {
            cout <<"REMOVE\n";
        }

        checker = 0 ; 
        
    }

}