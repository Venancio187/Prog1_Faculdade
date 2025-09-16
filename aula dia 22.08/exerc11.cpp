#include<stdio.h>
main(){
	float num1, num2, sub;
	printf("Digite o primeiro numero: ");
	scanf("%f", &num1);
	printf("Digite o segundo numero: ");
	scanf("%f", &num2);
	if(num1 > num2){
		sub = num1 - num2;
		printf("%.2f - %.2f = %.2f", num1, num2, sub);
	}
	else if(num2 > num1){
		sub = num2 - num1;
		printf("%.2f - %.2f = %.2f", num2, num1, sub);
		
	}
}
