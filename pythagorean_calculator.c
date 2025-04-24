#include <stdio.h>
#include <math.h>

int main() {
    float leg_a, leg_b, hypotenuse;
    printf("Enter the value of side a (type 0 if unknown): ");
    scanf("%f", &leg_a);
    printf("Enter the value of side b (type 0 if unknown): ");
    scanf("%f", &leg_b);
    printf("Enter the value of hypotenuse c (type 0 if unknown): ");
    scanf("%f", &hypotenuse);

    if (leg_a == 0) {
        if (hypotenuse <= leg_b) {
            printf("Invalid input: hypotenuse must be greater than side b.\n");
            return 1;
        }
        leg_a = sqrt(fabs(pow(hypotenuse, 2) - pow(leg_b, 2)));
        printf("Side a = %.2f\n", leg_a);
    } else if (leg_b == 0) {
        if (hypotenuse <= leg_a) {
            printf("Invalid input: hypotenuse must be greater than side a.\n");
            return 1;
        }
        leg_b = sqrt(fabs(pow(hypotenuse, 2) - pow(leg_a, 2)));
        printf("Side b = %.2f\n", leg_b);
    } else if (hypotenuse == 0) {
        hypotenuse = sqrt(pow(leg_a, 2) + pow(leg_b, 2));
        printf("Hypotenuse = %.2f\n", hypotenuse);
    } else {
        printf("Error: Only one side should be unknown.\n");
        return 1;
    }

    return 0;
}
