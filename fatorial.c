#include <stdio.h>
#include <stdlib.h>

unsigned int factorial(unsigned int x){
    if(x == 0 || x == 1){
        return 1;
    }
    else{
        return x*(factorial(x-1));
    }
};


int main(){
    int x;
    printf("Digite um número inteiro positivo: ");
    scanf("%u",&x);
    printf("fatorial(%d) = %u",x, factorial(x));


    return 0;
}