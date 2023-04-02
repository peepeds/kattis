#include <iostream>
#include <stack>

using namespace std ; 

int main(){
    int a  , b, c;
    stack <int> x ; 


    scanf("%d",&a);

    while(a--){
        scanf("%d",&b);

        if(b ==1){
            scanf("%d",&c);
            x.push(c);
        } else if ( b == 2){
            if(!x.empty())
            x.pop();
        } else if (b == 3) {
            if(x.empty()){
                printf("Empty!\n");
            } else {
              
                printf("%d\n",x.top());
            }
        }
    }
}