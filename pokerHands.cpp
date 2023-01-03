#include <iostream>
#include <string.h>
using namespace std ; 


int main(){
    int dua = 0 , tiga =0, empat=0 , lima=0 , enam=0 , tujuh=0 , delapan=0,
    sembilan=0 , sepuluh=0 , jack =0, queen=0 , king=0 , as =0; 

    char a , b ;

    for(int i = 0 ; i < 5 ; i++){
        cin >> a >> b ;
        if(a=='2'){
            dua++;
        } else if (a==3 ){
            tiga++;
        } else if (a==4 ){
            empat++;
        }else if (a==5 ){
            lima++;
        }else if (a==6 ){
            enam++;
        }else if (a==7 ){
            tujuh++;
        }else if (a==8 ){
            delapan++;
        }else if (a==9 ){
            sembilan++;
        }else if (a=='T' ){
            sepuluh++;
        }else if (a=='J' ){
            jack++;
        }else if (a=='Q' ){
            queen++;
        }else if (a=='K' ){
            king++;
        }else if (a=='A' ){
            as++;
        }
    }

}
