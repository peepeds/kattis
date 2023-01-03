#include <stdio.h>

int main(){
    char a[2];
    char swab[1];
    
    scanf("%s",a);
    
    swab[0] = a[0];
    a[0] = a[1];
    a[1] = swab[0];
    
    printf("%s",a);
    return 0;
}