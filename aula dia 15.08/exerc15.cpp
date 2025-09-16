#include<stdio.h>
#include<locale.h>
main() {
    setlocale(LC_ALL, "Portuguese");
    float lado, base, altura, div,soma=0;
    printf("Digite o lado do triângulo: ");
    scanf("%f", &lado);
    printf("Digite a base do triângulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triângulo: ");
    scanf("%f", &altura);
    soma= lado+base;
    soma= soma+altura;
    div= soma/2;
    printf("O semiperímetro do triângulo é: %.2f", div);
}   
