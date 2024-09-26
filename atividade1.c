#include <stdio.h>

int main(){
int n1,n2,sub,soma,div,mult;

printf("Digite o primeiro numero da operação:\n");
scanf ("%d",&n1);

printf("Digite o segundo numero da operação:\n");
scanf ("%d",&n2);
  
soma = n1 + n2;
sub = n1 - n2;
div = n1 / n2;
mult = n1 * n2;

printf("resultado soma: %d\n, resultado subtração:%d\n, resultado divisão:%d\n, resutado mult:%d\n",soma,sub,div,mult);



return 0;
}