#include <stdio.h>
#include <math.h>

int main() {
    float initial_temperature;
    char option;

    printf("Which temperature do you want to convert from? (c/f/k): ");
    scanf(" %c", &option);

    printf("Enter the temperature value: ");
    scanf("%f", &initial_temperature);

    switch (option) {
        case 'c': {
            float fahrenheit = (initial_temperature * 9.0 / 5.0) + 32;
            float kelvin = initial_temperature + 273.15;
            printf("Fahrenheit: %.2f\n", fahrenheit);
            printf("Kelvin: %.2f\n", kelvin);
            break;
        }
        case 'f': {
            float celsius = (initial_temperature - 32) * 5.0 / 9.0;
            float kelvin = celsius + 273.15;
            printf("Celsius: %.2f\n", celsius);
            printf("Kelvin: %.2f\n", kelvin);
            break;
        }
        case 'k': {
            float celsius = initial_temperature - 273.15;
            float fahrenheit = celsius * 9.0 / 5.0 + 32;
            printf("Celsius: %.2f\n", celsius);
            printf("Fahrenheit: %.2f\n", fahrenheit);
            break;
        }
        default:
            printf("Invalid option.\n");
    }

    return 0;
}
