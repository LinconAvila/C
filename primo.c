#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int primo(int n){
    if (n <= 1){
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return 0; 
        }
    }
    return 1;
}

int main(){
    int n;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);
    
    if (primo(n)){
        printf("%d é primo\n", n);
    }
    else{
        printf("%d não é primo\n", n);
    }

    return 0;
}
