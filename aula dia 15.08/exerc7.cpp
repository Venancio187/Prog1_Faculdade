#include<stdio.h>
#include<locale.h>
main() {
    setlocale(LC_ALL, "Portuguese");
    float num1, num2,soma=0, div, multi1, multi2, result;
    printf("Digite um valor: ");
    scanf("%f", &num1);
    printf("Digite um valor: ");
    scanf("%f", &num2);
    multi1=num1*4;
    multi2=num2*6;
    soma= multi1+multi2;
    div= soma/2;
    printf("O resultado é %.2f", div);
}
