#include<stdio.h>
#include<locale.h>
main() {
    setlocale(LC_ALL, "Portuguese");
    float baseMaior, baseMenor, altura, div,soma=0, multi;
    printf("Digite a base maior: ");
    scanf("%f", &baseMaior);
    printf("Digite a base menor: ");
    scanf("%f", &baseMenor);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    soma= baseMaior+baseMenor;
    div= soma/2;
    multi= div*altura;
    printf("A área do trapézio é: %.1f ", multi);
}
