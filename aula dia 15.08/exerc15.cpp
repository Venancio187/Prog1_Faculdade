#include<stdio.h>
#include<locale.h>
main() {
    setlocale(LC_ALL, "Portuguese");
    float lado, base, altura, div,soma=0;
    printf("Digite o lado do tri�ngulo: ");
    scanf("%f", &lado);
    printf("Digite a base do tri�ngulo: ");
    scanf("%f", &base);
    printf("Digite a altura do tri�ngulo: ");
    scanf("%f", &altura);
    soma= lado+base;
    soma= soma+altura;
    div= soma/2;
    printf("O semiper�metro do tri�ngulo �: %.2f", div);
}   
