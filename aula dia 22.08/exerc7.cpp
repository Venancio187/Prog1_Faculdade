#include<stdio.h>
main(){
	int num1, num2 ,div;
	printf("Digite um numero: ");
	scanf("%d", &num1);
	printf("Digite um numero: ");
	scanf("%d", &num2);
	if(num1 % num2 == 0 || num2 % num1 == 0){
		
		printf("Os numeros sao multiplos!");
		
	}
	else{
		printf("Os numeros nao sao multiplos!");
	}
}
