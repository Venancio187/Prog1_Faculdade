#include<stdio.h>
#include<locale.h>
main() {
    setlocale(LC_ALL, "Portuguese");
    float base, altura, div, multi;
    printf("Digite a base do tri�ngulo: ");
    scanf("%f", &base);
    printf("Digite a altura do tri�ngulo: ");
    scanf("%f", &altura);
    multi= base*altura;
    div= multi/2;
    printf("A �rea do tri�ngulo �: %.2f", div);
}
