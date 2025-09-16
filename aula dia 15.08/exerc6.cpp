#include<stdio.h>
#include<locale.h>
main() {
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, sub, result;
    printf("Digite um valor: ");
    scanf("%d", &num1);
    printf("Digite um valor: ");
    scanf("%d", &num2);
    sub= num1-num2;
    result= sub*sub;
    printf("O quadrado da diferença é: %d", result);
}
    
