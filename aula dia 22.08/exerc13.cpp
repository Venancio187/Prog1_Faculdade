#include<stdio.h>
#include<math.h>
main(){
	int codigo;
	float a, b, c, multi, soma=0, sub;
	printf("Digite o codigo: ");
	scanf("%d", &codigo);
	printf("Digite o valor de A: ");
	scanf("%f", &a);
	printf("Digite o valor de B: ");
	scanf("%f", &b);
	printf("Digite o valor de C: ");
	scanf("%f", &c);
	if(codigo == 1){
		multi = a*b*c;
		printf("O resultado da multiplicao: %.2f", multi);
	}
	else if(codigo == 2){
		soma = a+b+c;
		printf("O resultado da soma: %.2f", soma);
	}
	else if(codigo == 3){
		sub = a-b-c;
		printf("O resultado da subtracao: %.2f", sub);
	}
	else if(codigo == 4){
		multi = (a*a*a) + (b*b*b) + (c*c*c);
		printf("O resultado da raiz: %.2f", multi);
	}
	else{
		printf("Codigo invalido");
	}
}
