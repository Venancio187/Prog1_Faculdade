#include<stdio.h>
#include<locale.h>
main() {
    setlocale(LC_ALL, "Portuguese");
    float num1, num2, div, sub, soma=0, multi;
    printf("Digite um valor: ");
    scanf("%f", &num1);
    printf("Digite um valor: ");
    scanf("%f", &num2);
    soma= num1+num2;
    sub= num1-num2;
    multi= num1*num2;
    div= num1/num2;
    printf("\nA soma dos n�meros �: %.2f", soma);
    printf("\nA subtra��o dos n�meros �: %.2f", sub);
    printf("\nA multiplica��o dos n�meros �: %.2f", multi);
    printf("\nA divis�o dos n�meros �: %.2f", div);
}
