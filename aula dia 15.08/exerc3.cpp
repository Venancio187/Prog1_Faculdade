#include<stdio.h>
#include<locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, multi;
    printf("Digite um valor: ");
    scanf("%d", &num1);
    printf("Digite um valor: ");
    scanf("%d", &num2);
    multi= num1*num2;
    printf("O resultado é: %d ", multi);
}
