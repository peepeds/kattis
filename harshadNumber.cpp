#include <iostream>
using namespace std;

int main(){
    long long unsigned int x  , copy ;
    long long unsigned int divisor = 0  , tmp;
    cin >> x ; 
    copy = x ; 
    do{
       tmp = x %10 ;
       x/= 10 ;
       divisor += tmp ;
    } while(x > 0);
    bool statement = false ;
    while(!statement){
        if(copy % divisor !=0){
            copy++;
            divisor++;
        } else {
            statement = true ;
        }
    }
    
    cout << copy << endl ;
}