#include<stdio.h>
main(){
	int i;
	float a,b,c, menor, maior, medio;
	
	printf("Digite 3 valores:\n");
	scanf("%f %f %f", &a, &b, &c);
	
	printf("Digite o codigo: ");
	scanf("%d", &i);
	
	if (a<b && a<c){
		menor = a;
	}
	else if(b < a && b < c){
		menor = b;
	}
	else{
		menor=c;
	}
	
	if(a > b && a > c){
		maior = a;
	}
	
	else if(b > a && b > c){
		maior = b;
	}
	else{
		maior = c;
	}
	medio = (a+b+c) - menor - maior;

	if(i == 1){
		printf("Os numeros em ordem crescente %.2f %.2f %.2f", menor, medio, maior);
	}
	else if(i == 2){
		printf("Os numeros em ordem decrescente %.2 %2.f %.2f", maior, medio, menor);
		
	}
	else if(i == 3){
		printf("O maior numero esta no meio %.2f %.2f %.2f", medio, maior, menor);
	}
	else{
		printf("ERRO NO CODIGO!!");
	}
	
}
