#include <iostream>
using namespace std ;

int main(){
    double a,b,c;
   
    cin >> a >> b >> c;

    if(a+b==c){
        cout << a << '+' << b << '=' << c << endl;
    } else if (a== b + c ){
        cout << a << '=' << b << '+' << c << endl;
    } else if ( a  - b == c){
        cout << a << '-' << b << '=' << c << endl;
    } else if (a== b - c  ){
        cout << a << '=' << b << '-' << c << endl;
    } else if (a*b==c){
        cout << a << '*' << b << '=' << c << endl;
    } else if (a== b * c ){
        cout << a << '=' << b << '*' << c << endl;
    }else if(a/b==c){
        cout << a << '/' << b << '=' << c << endl;
    }else if(a== b / c ){
        cout << a << '=' << b << '/' << c << endl;
    }
}