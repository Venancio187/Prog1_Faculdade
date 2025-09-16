#include<stdio.h>
#include<locale.h>
main() {
    setlocale(LC_ALL, "Portuguese");
    float lado, base, multi;
    printf("Digite o lado do retângulo: ");
    scanf("%f", &lado);
    printf("Digite a base do retângulo: ");
    scanf("%f", &base);
    multi= lado*base;
    printf("A área do retângulo é: %.2f", multi);
}
