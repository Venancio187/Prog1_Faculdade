#include<stdio.h>
main(){
	int num1,num2,num3;
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	
	printf("Digite o terceiro numero: ");
	scanf("%d", &num3);
	
	if(num1>num2 && num1>num3){
		printf("Maior valor %d", num1);
	}
	else if(num2>num1 && num2>num3){
		printf("Maior valor %d", num2);
	}
	else if(num3>num1 && num3>num2){
		printf("Maior valor %d", num3);
	}
	else{
		printf("Numeros iguais!");
	}
}
