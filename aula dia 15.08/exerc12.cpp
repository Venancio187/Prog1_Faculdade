#include<stdio.h>
#include<locale.h>
#include<math.h>
main() {
    setlocale(LC_ALL, "Portuguese");
    float raio,pi=3.14, multi;
    printf("Digite o raio do c�rculo: ");
    scanf("%f", &raio);
    multi= raio*raio*pi;
    printf("A �rea do c�rculo �: %.2f", multi);
}
    
