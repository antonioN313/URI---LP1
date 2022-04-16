#include <stdio.h>
#include <stdlib.h>

int main(){
    long long int numero, sp;

    scanf("%lld", &numero);

    if(numero % 2 == 0){
        sp = numero + 2;
    }
    else{
        sp = numero + 1;
    }
    printf("%lld\n", sp);

    return 0;
}
