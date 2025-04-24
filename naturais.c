#include <stdio.h>
#include <stdlib.h>

void impar_natural(int n){
    for (int i; i<=n;i++){
        if(!(i%2==0)){
            printf("%u,",i);
        }
    }
}


int main(){
    int n;
    printf("Digite um número inteiro positivo: ");
    scanf("%u",&n);
    impar_natural(n);



    return 0;
}