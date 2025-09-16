#include<stdio.h>
main(){
	float num1, num2, cresc;
	printf("Digite o primeiro numero: ");
	scanf("%f", &num1);
	printf("Digite o segundo numero: ");
	scanf("%f", &num2);
	if(num1 < num2){
		printf("Os numeros crescentes sao %.2f e %.2f", &num1, num2);
		
		
	}
	else if(num2 < num1){
		printf("Os numeros crescentes sao %.2f e %.2f", num2, num1);
	}
	else{
		printf("Os numeros sao iguais!");
		
	}
}

