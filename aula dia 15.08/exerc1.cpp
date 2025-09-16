#include<stdio.h>
#include<math.h>
#include<locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    int soma=0,num1, num2;
    printf("Digite um valor: ");
    scanf("%d", &num1);
    printf("Digite um valor: ");
    scanf("%d", &num2);
    soma= num1+num2;
    printf("O resultado é: %d", soma);
}
