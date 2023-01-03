#include <iostream>
#include <math.h>
using namespace std ; 

int main(){
    int a  , b , c; 
    scanf("%d",&a);

    b = pow(2,a);
    b = b + 1 ;
    c = pow(b,2);

    printf("%d\n",c);

}