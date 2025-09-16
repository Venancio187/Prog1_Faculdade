#include<stdio.h>
main(){
	int num1, num2;
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	if(num1 > num2){
		printf("Maior valor: %d", num1 );
		
	}
	else if(num2 > num1){
		printf("Maior valor: %d", num2);
		
	}
	else{
		printf("Os numeros sao iguais!");
	}
}
