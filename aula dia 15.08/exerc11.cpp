#include<stdio.h>
#include<locale.h>
#include<math.h>
main() {
    setlocale(LC_ALL, "Portuguese");
    float lado, volume, area;
    printf("Digite o lado do cubo: ");
    scanf("%f", &lado);
    volume= pow(lado, 3);
    printf("\nO volume do cubo é: %.2f", volume);
    area= 6*lado*lado;
    printf("\nA área do cubo é: %.2f", area);
}
