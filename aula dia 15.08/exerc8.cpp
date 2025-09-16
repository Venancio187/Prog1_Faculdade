#include<stdio.h>
#include<locale.h>
main() {
    setlocale(LC_ALL, "Portuguese");
    int num1, num2,razao, soma=0, sub, div1,div2, multi;
      printf("Digite o primeiro termo: ");
      scanf("%d", &num1);
      printf("Digite o último termo: ");
      scanf("%d", &num2);
      printf("Digite a razão: ");
      scanf("%d", &razao);
      sub= num2-num1;
      div1= sub/razao;
      soma=num1+num2;
      div2= soma/2;
      multi= div2*div1;
      printf("O resultado da PA é: %d", multi);
  }
