#include <stdio.h>

int main() {
    int numero, contador_impares = 0;

    // Solicitar ao usu�rio que digite seis n�meros inteiros
    printf("Digite o primeiro numero inteiro: "); 
    scanf("%d", &numero);

    // Verificar se o primeiro n�mero � �mpar
    if (numero % 2 != 0) {
        contador_impares++;
    }

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &numero);

    // Verificar se o segundo n�mero � �mpar
    if (numero % 2 != 0) {
        contador_impares++;
    }

    printf("Digite o terceiro numero inteiro: ");
    scanf("%d", &numero);

    // Verificar se o terceiro n�mero � �mpar
    if (numero % 2 != 0) {
        contador_impares++;
    }

    printf("Digite o quarto numero inteiro: ");
    scanf("%d", &numero);

    // Verificar se o quarto n�mero � �mpar
    if (numero % 2 != 0) {
        contador_impares++;
    }

    printf("Digite o quinto numero inteiro: ");
    scanf("%d", &numero);

    // Verificar se o quinto n�mero � �mpar
    if (numero % 2 != 0) {
        contador_impares++;
    }

    printf("Digite o sexto numero inteiro: ");
    scanf("%d", &numero);

    // Verificar se o sexto n�mero � �mpar
    if (numero % 2 != 0) {
        contador_impares++;
    }

    // Mostrar a quantidade de valores �mpares informados
    printf("Quantidade de numeros impares: %d\n", contador_impares);

    return 0;
}
