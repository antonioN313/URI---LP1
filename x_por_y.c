#include <stdio.h>

int main() {

 int n,x,y;

 scanf("%d",&n);

    while(n != 0){

        scanf("%d%d" ,&x,&y);
        if(y == 0){
            printf("divisao impossivel\n");
            n--;
        }else{
            printf("%.1f\n",(float)x/y);
            n--;
        }
    }

    return 0;
}
