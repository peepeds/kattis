#include <iostream>
#include <string.h>
using namespace std ; 

int main(){
    int a  ,  i  , len[700]; 
    char s[700][60] ,s1[700][60] ;

    scanf("%d",&a);
    for(i=0;i<a;i++){
        cin  >> s[i];
        cin >> s1[i];
        len[i] = strlen(s[i]);
    }
    for(i=0;i<a;i++){
        cout <<s[i] <<endl;
        cout <<s1[i] << endl;

        for(int j = 0 ; j < len[i] ;j++){
            if(s1[i][j]!=s[i][j]){
                cout << '*';
            } else {
                cout << ".";
            }
        }
        cout << endl << endl ;
    }
  
}