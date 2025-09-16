#include<stdio.h>
main(){
	int i, num;
	for(i = 1; i<=10; i++){
        printf("\nDigite 10 numeros\n");
		scanf("%d", &num);
		if(num % 2 == 0){
			printf("Par %d", num);
		}
	}
}
