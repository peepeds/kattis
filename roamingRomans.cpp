#include <iostream>
using namespace std ; 

int main(){
    double a  = 5280  , b = 4854  , c , d; 

    cin >> c ; 
    d = a / b * c * 1000; 

    printf("%.0lf\n",d);
}