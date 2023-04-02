#include <iostream>
using namespace std ; 

int main(){
    int day = 4 ; 
    int x ,  y ;
    cin >> x >> y ; 
    if(y ==1){
        x += 0 ; 
    } else if (y == 2){
        x += 31 ; 
    } else if (y == 3){
        x  += 59 ; 
    } else if ( y == 4){
        x += 90 ; 
    } else if ( y == 5){
        x += 120 ; 
    } else if ( y == 6){
        x += 151 ; 
    } else if (y == 7){
        x +=  181 ; 
    } else if ( y == 8){
        x += 212; 
    } else if ( y == 9){
        x +=  243; 
    } else if ( y == 10){
        x +=  273; 
    } else if ( y == 11){
        x +=  304;
    } else if ( y == 12){
        x += 334 ; 
    }
    x = x -1 + day ;
   
    x  %= 7 ;
    if(x == 0){
        cout << "Sunday\n";
    } else if (x==1){
        cout << "Monday\n"  ;
    } else if (x==2){
        cout << "Tuesday\n";
    } else if(x ==3){
        cout << "Wednesday\n" ; 
    } else if (x ==4){
        cout << "Thursday\n";
    } else if (x==5){
        cout << "Friday\n";
    } else {
        cout << "Saturday\n";
    }
}