#include<stdio.h>
#include<locale.h>
main() {
    setlocale(LC_ALL, "Portuguese");
    int num1, num2;
    float div;
    printf("Digite um valor: ");
    scanf("%d", &num1);
    printf("Digite um valor: ");
    scanf("%d", &num2);
    div= (float)num1/num2;
    printf("O resultado é: %.2f", div);
    }
