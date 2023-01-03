#include <iostream>
using namespace std ;

int main(){
    int a,c,d,i,j;
    cin >> a;
    int b[a];
    for(i=0;i<a;i++){
        cin >>b[i];
        
    }
    for(j=a;j>0;j--){
        cout << b[j-1] << endl;
    }
}