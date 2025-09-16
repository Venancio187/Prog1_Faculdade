#include<stdio.h>
main(){
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	if(num % 2 == 0){
		
		printf("Este numero eh par!");
		
	}
	else{
		
		printf("Este numero eh impar!");
	}
}
