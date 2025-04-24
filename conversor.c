#include <stdio.h>
#include <stdlib.h>


float conversor(float t){
    return ((t-32)*5)/9;
}

int main(){
    float temperatura;
    printf("Digite uma temperatura em fahrenheit: ");
    scanf("%f", &temperatura);
    printf("%.2f C é %.2f F",temperatura, conversor(temperatura));

    return 0;
}