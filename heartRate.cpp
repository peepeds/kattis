#include <iostream>
using namespace std ;

int main(){
    double a , b , c, i ;
    double hasil , min , max ;

    cin >> a ;

    for(i=0;i<a;i++){
        cin >> b >> c ;
        hasil  = 60 * b / c ;
        min = 60 / c ;
        max = 60 / c ;
        min = hasil - min ;
        max = hasil + max ;

        
        printf("%.4lf %.4lf %.4lf\n",min, hasil , max);

    }
}