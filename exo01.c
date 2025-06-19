#include <stdio.h>

int main(void)
{
    float temperature;

    printf("Entrez les degrés en Celsius : ");
    scanf("%f", &temperature);

    printf("%.2f degrés Celsius font %.2f degrés Fahrenheit", temperature, temperature * 1.8 + 32) ;

    return 0;
}
