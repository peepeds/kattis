#include <iostream> 

using namespace std ; 

int main(){
    int a ,b , i , j , k ;
    cin >> a ; 
    
    for(i=0 ; i < a ;i++){
        cin >> b ; 
        int c[b];
        int tot=0;
        double rata=0 , counter=0 ,hasil=0;
        for(j=0 ;j < b ;j++){
            cin >> c[j];
            tot+= c[j];
        }
        rata = tot / b ;
        
        for(j=0 ; j < b ;j++){
            if(c[j]>rata){
                counter++;
            }
        }
        hasil = counter / b ;
        
        printf("%.3lf%c\n",hasil*100,'%');
    }
    
}
