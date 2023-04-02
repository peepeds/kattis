#include <iostream>
#include <string>
using namespace std ; 

int main(){
    int x = 1 ; 
    int tot = 0 ;
    do{
        cin >> x ; 
        string s[x] ; 
        for(int i = 0 ; i < x ; i++){
            cin >> s[i];
        }
        if(x!=0)
        cout << "SET " << ++tot  << endl ; 
        
        for(int j=0 ; j < x ; j+=2){
            cout << s[j] << endl;
        }
        if(x%2==1){
            for(int k = x -2 ; k > 0 ; k-=2){
                cout << s[k] << endl ;
            }
        } else if (x %2 == 0 && x!=0){
            for(int k = x -1 ; k > 0 ; k-=2){
                cout << s[k] << endl ;
            }
        }
        
    } while (x != 0);
}