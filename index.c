/*
*   Programa tem o objetivo de ler cinco números inteiros, ordenar os valores
* dentro de um array e exibir cada posição ordenada em ordem crescente.
*
*   @Autor: Niiick013
*   @GitHub: https://github.com/Niiick013
*
*/
#include <stdio.h>

int main() {
    int i, k, aux;
    int vetor [5];

    system("clear"); //Limpa a tela
    for(i=0; i<5; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &vetor[i]);

    } //Recebe os valores

    

    return 0;

} //Fim da função main