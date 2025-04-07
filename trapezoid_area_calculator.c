#include <stdio.h>
#include <math.h>

int main(){
    float bigger_side, smaller_side, height, area;

    printf("Enter the size of the bigger side: ");
    scanf("%f", &bigger_side);
    printf("Enter the size of the smaller side: ");
    scanf("%f", &smaller_side);
    printf("Enter the height: ");
    scanf("%f", &height);

    area = height * ((bigger_side + smaller_side)/2);
    printf("Area = %.2f\n", area);

    return 0;
}