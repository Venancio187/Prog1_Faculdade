#include<stdio.h>
#include<math.h>
main(){
	float lado, base, altura, soma=0, div, S;
	printf("Digite o lado do triangulo: ");
	scanf("%f", &lado);
	printf("Digite a base do triangulo: ");
	scanf("%f", &base );
	printf("Digite a altura do triangulo: ");
	scanf("%f", &altura);
	soma= lado+base;
	soma= soma+altura;
	div= soma/2;
	S= div;
	S= sqrt(S*(S-lado)*(S-base)*(S-altura));
	printf("A area do triangulo eh %.2f", S);
}
