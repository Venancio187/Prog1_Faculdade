#include <stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    int num1, num2, num3;

    printf("Digite tr�s n�meros inteiros:\n");
    scanf("%d %d %d", &num1, &num2, &num3); 

    // Ordenando os n�meros em ordem crescente
    int temp;
    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("N�meros em ordem crescente: %d, %d, %d\n", num1, num2, num3);

    return 0;
}
