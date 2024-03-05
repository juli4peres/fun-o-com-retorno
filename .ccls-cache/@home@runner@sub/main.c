#include <stdio.h>

int soma(int num1, int num2){
  return num1 + num2;
}

void subtrai(){
  int num1, num2;
  printf("Digite um número:");
  scanf("%d", &num1);
  printf("Digite o 2º número:");
  scanf("%d", &num2);
  printf("O resultado é %d\n", num1 - num2);
}

int main(void) {
  
  subtrai();
  printf("A soma é %d\n", soma(2,90));

  return 0;
}