#include <iostream>
#include <string.h>

using namespace std ; 

int main(){
    int  a, i  ,  j , k  , c = 0; 

    cin >> a ; 
    char s[a][1009];
    int len[a];

    for(i=0;i<a;i++){
        cin >>s[i] ; 
        len[i] = strlen(s[i]);
        for(j=0 ; j < len[i];j++){
            if(s[i][j]=='p'||s[i][j]=='P'){
                if(s[i][j+1]=='i'||s[i][j+1]=='I'){
                    if(s[i][j+2]=='n'||s[i][j+2]=='N'){
                        if(s[i][j+3]=='k'||s[i][j+3]=='K'){
                            c++ ;
                            j = len[i]- 1 ;
                        }
                    }
                }
            } else if(s[i][j]=='r'||s[i][j]=='R'){
                if(s[i][j+1]=='o'||s[i][j+1]=='O'){
                    if(s[i][j+2]=='s'||s[i][j+2]=='S'){
                        if(s[i][j+3]=='e'||s[i][j+3]=='E'){
                            c++;
                            j = len[i]- 1 ;
                        }
                    }
                }
                
            }
        }
    }
    if ( c> 0){
        cout << c << endl ;
    } else {
        cout << "I must watch Star Wars with my daughter" << endl ;
    }
}