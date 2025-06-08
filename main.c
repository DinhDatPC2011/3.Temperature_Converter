#include <stdio.h>

int main(){

    int choise = 0;
    float celsius = 0.0f;
    float fahrenheit = 0.0f;
    float conversion_result = 0.0f;


    printf("TEMPERATURE CONVERSION PROGRAM\n");
    printf("1. Celsious to Fahrenheit. \n2. Fahrenheit to Celcius.\n");
    
    printf("Choose the convertion method you need (1 or 2): ");
    scanf("%d", &choise);

    if(choise == 1){
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9/5) + 32;
        printf("%1f Celsius is equal to %.1f Farhenheit.", celsius, fahrenheit);

    }else if(choise == 2){
        printf("Enter the temperature in Farhenheit: ");
        scanf("%f", &fahrenheit);      
        celsius = (fahrenheit - 32) * 5/9;
        printf("%.1f Farhenheit is equal to %.1f Celsius.", fahrenheit, celsius);

    }else{
        printf("Invalid input.");
    }


    return 0;
}