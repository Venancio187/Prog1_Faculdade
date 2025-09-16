#include<stdio.h>
main(){
	float altura, multi;
	char sexo;
	printf("Informe a altura: ");
	scanf("%f", &altura);
	
	printf("Digite o sexo: ");
	scanf(" %c", &sexo);
	    
	if(sexo == 'M'){
		multi = (72.7 * altura) - 58;
		printf("Peso ideal: %.2f", multi);
	}
	else if(sexo == 'F'){
		multi = (62.1 * altura) - 44.7;
		printf("Peso ideal: %.2f", multi);
	}
	else{
		  printf("Sexo invalido. Por favor, digite 'M' ou 'm' para masculino, ou 'F' ou 'f' para feminino.\n");
	}
}
