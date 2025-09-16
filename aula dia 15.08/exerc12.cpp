#include<stdio.h>
#include<locale.h>
#include<math.h>
main() {
    setlocale(LC_ALL, "Portuguese");
    float raio,pi=3.14, multi;
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);
    multi= raio*raio*pi;
    printf("A área do círculo é: %.2f", multi);
}
    
