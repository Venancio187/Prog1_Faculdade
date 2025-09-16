#include<stdio.h>
main(){
	int num1,num2,num3,num4,menor,maior,menos;
	printf("Digite quatro numeros inteiros:\n");
	scanf("%d %d %d %d", &num1,&num2,&num3,&num4);
	
	if(num1>num2 && num1>num3 && num1>num4){
		maior = num1;
	}
	else if(num2>num3 && num2>num4){
		maior = num2;
	}
	else if(num3>num4){
		maior = num3;
	}
	else{
		maior = num4;
	}
	if(num1<num2 && num1<num3 && num1<num4){
		menor = num1;
	}
	else if(num2<num3 && num2<num4){
		menor = num2;
	}
	else if(num3<num4){
		menor = num3;
	}
	else{
		menor = num4;
}
menos = maior-menor;

printf("O maior valor digitado foi: %d ", maior);
printf("\nO menor valor digitadi foi: %d ", menor);
printf("\nA diferenca entre os valores foi: %d ", menos);
}
