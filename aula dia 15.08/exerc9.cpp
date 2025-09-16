#include<stdio.h>
#include<locale.h>
main() {
    setlocale(LC_ALL, "Portuguese");
    int lado, multi;
    printf("Digite o lado do quadrado: ");
    scanf("%d", &lado);
    multi= lado*lado;
    printf("A área do quadrado é: %d", multi);
}
    
