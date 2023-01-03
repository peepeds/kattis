#include <iostream>
using namespace std ;

int main(){
    double a;
    double b,c;
    cin >> a ;
    b = 100 / a;
    c = 100 / (100 - a);

    printf("%.9lf\n",b);
    printf("%.9lf\n",c);
    return 0 ;

}