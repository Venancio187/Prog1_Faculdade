#include<stdio.h>
#include<locale.h>
main() {
    setlocale(LC_ALL, "Portuguese");
    float lado, base, multi;
    printf("Digite o lado do ret�ngulo: ");
    scanf("%f", &lado);
    printf("Digite a base do ret�ngulo: ");
    scanf("%f", &base);
    multi= lado*base;
    printf("A �rea do ret�ngulo �: %.2f", multi);
}
