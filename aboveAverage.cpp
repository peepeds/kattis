#include <iostream>
using namespace std ; 

int main(){
    int a , b ;
    cin  >> a ; 
    int i,j, tot = 0;
    int counter = 0 ;
    double persen = 0 ;

    for(i=0;i<a;i++){
        cin >> b ;
        int c[b];
        for(j=0;j<b;j++){
            cin >>c[j];

        }
        for(j=0;j<b;j++){
            tot+= c[j];
    
        }
        tot = tot / b ;
        
        for(j=0;j<b;j++){
            c[j]>tot ? counter++ : counter = counter ;
            
        }
       
    }

    
  
}