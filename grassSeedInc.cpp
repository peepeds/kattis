#include <iostream>
using namespace std; 

int main(){
    double a,b,c,d,i,tot=0 ;

    cin >> a ;
    cin >> b ;

    for(i=0;i<b;i++){
        cin >> c >> d ;
        tot = tot +(c*d*a);
        
    }

    printf("%.7lf\n",tot);
}