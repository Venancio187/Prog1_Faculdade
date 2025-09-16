#include<stdio.h>
main(){
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if(num>=0){
		
		printf("%d eh um numero positivo!", num);
		
	}
	else{
		printf("%d eh um numero negativo!", num);
	}
}
