#include <stdio.h>
#include <string.h>

int main(){
    int a , b , c[1000005],decimal , i , j , k ,l;
    int biner = 0 , basis = 1, tmp , sisa  ;
    char strBiner[2000000];
    int counter , len ;

    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&b);
        for(j=0;j<b;j++){
            scanf("%d",&c[j]);
        }
        for(j=0;j<b;j++){
            if(c[j]< c[j+1]){
                decimal = c[j] ^ c[j+1];
            }
            while ( decimal != 0){
                sisa = decimal % 2 ;
                decimal = decimal / 2 ;
                biner = biner + sisa * basis ;
                basis = basis * 10 ;
            }  
        }
        printf("%d",biner);
        
    }
    
}