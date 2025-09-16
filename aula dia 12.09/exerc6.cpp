#include<stdio.h>
main(){
	int i, num, N;
	
	printf("Informe um numero inteiro: ");
	scanf("%d", &N);
	
	for(i=1; i<=N; i++){
		printf("\nDigite %d valores:", N);
		scanf("%d", &num);
		
		if(num % 2 == 1){
			printf("Impar %d", num);
		}
	}
}
