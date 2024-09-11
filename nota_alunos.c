#include <stdio.h>

int main(){
    float nota1, nota2, nota3, nota4, resultado; 
    printf("digite a nota 1:\n");
    scanf("%f",&nota1);

    printf("digite a nota 2:\n");
    scanf("%f",&nota2);
    
    printf("digite a nota 3:\n");
    scanf("%f",&nota3);

printf("digite a nota 4:\n");
    scanf("%f",&nota4);

resultado = (nota1+nota2+nota3+nota4) /4;
if(resultado>=6){
    printf("o aluno esta aprovado");

}
else {
    printf("o aluno esta reprovado");
}

    return 0;



}    


