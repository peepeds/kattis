#include <iostream>
#include <queue>

using namespace std ; 

int main(){
    int a  , b ;
    queue <int> x ; 


    scanf("%d",&a);

    while(a--){
        scanf("%d",&b);
        if(b ==1){
            scanf("%d",&b);
            x.push(b);
        } else if ( b == 2){
            if(!x.empty())
            x.pop();
        } else if (b == 3) {
            if(x.empty()){
                printf("Empty!\n");
            } else {
                printf("%d\n",x.front());
            }
        }
    }
}