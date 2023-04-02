#include <stdio.h>
#include <string.h>

int main(){
   int a , i , b, j  , c= 0 , d = 0;
   scanf("%d",&a);
   char s[1002][110];
   char s1[200];
   long long unsigned int len , Len[1002], sum = 0 , Sum[1002] , SUM[1002] ;
   for(i = 0 ; i < a ; i++){
        scanf("%[^\n]",s[i]);
        getchar();
        Len[i]= strlen(s[i]);
        Sum[i]=0;
        SUM[i]=0;
        for(j=0;j<Len[i];j++){
            Sum[i] += s[i][j];
        }
        for(j=0;j<Len[i];j++){
            if(s[i][j]!='a'){                 
                SUM[i] += s[i][j];
            } else if (s[i][j]=='a'){
                SUM[i] += s[i][j];
                break;
            }
        }
        Sum[i] = Sum[i]- SUM[i];
    }
    scanf("%[^\n]",s1);
    
    len = strlen(s1);
    for(int k = 0 ; k < len ; k++){
        sum += s1[k];
    }
    for(int l = 0 ; l < a ; l++){
        if(Sum[l]==sum){
            c++;
        }
    }
    printf("%d\n",c);
}