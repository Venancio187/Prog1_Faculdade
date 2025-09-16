#include<stdio.h>
#include<locale.h>
main() {
    setlocale(LC_ALL, "Portuguese");
    float base, altura, div, multi;
    printf("Digite a base do triângulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triângulo: ");
    scanf("%f", &altura);
    multi= base*altura;
    div= multi/2;
    printf("A área do triângulo é: %.2f", div);
}
