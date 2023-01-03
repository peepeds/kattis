#include <iostream>
#include <string.h>
using namespace std ; 

int main(){
    int a,i ;
    char str[31];
    do{
        scanf("%d",&a);
        if(a!=0){
            scanf("%s",str);
            int len = strlen(str);
            for(i=0;i<len;i++){
                if(str[i]>= 65 && str[i] <=90 ){
                str[i] = str[i]+a;
                } else if(str[i]== '_'){
                    str[i] = '.';
                } else if (str[i] == '.'){
                    str[i] = 'A';
                }
            }
            
            for(i=0;i<len/2;i++){
                int temp = str[i];
                str[i] = str[len-i-1];
                str[len-i-1] = temp;

            }

            printf("%s\n",str);
        }
    } while(a!=0);
}