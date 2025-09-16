#include<stdio.h>
main(){
	int num, soma=0;
	printf("Digite o primeiro numero: ");
	scanf("%d", &num);
	if(num % 2 == 0){
		soma= soma+num;
	}
	printf("Digite o segundo numero: ");
	scanf("%d", &num);
	if(num % 2 == 0){
		soma= soma+num;
	}
	printf("Digite o terceiro numero: ");
	scanf("%d", &num);
	if(num % 2 == 0){
		soma= soma+num;
	}
	printf("Digite o quarto numero: ");
	scanf("%d", &num);
	if(num % 2 == 0){
		soma= soma+num;
	}
	printf("Digite o quinto numero: ");
	scanf("%d", &num);
	if(num % 2 == 0){
		soma= soma+num;
	}
	printf("Digite o sexto numero: ");
	scanf("%d", &num);
	if(num % 2 == 0){
		soma= soma+num;
	}
	printf("A soma dos numeros pares eh %d", soma);
}
