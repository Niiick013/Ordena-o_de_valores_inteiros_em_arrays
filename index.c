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
    int i, j, aux;
    int lista [5];

    system("clear"); //Limpa a tela
    printf("=========\n");
    printf(" ENTRADA \n");
    printf("=========\n\n");

    for(i=0; i<5; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &lista[i]);

    } //Recebe os valores

    for(i=0; i<=5; i++) {
        for(j=i; j<5; j++) {
            if(lista[i] > lista[j]) {
                aux = lista[i];
                lista[i] = lista[j];
                lista[j] = aux;

            } //Ordena a posição dos arrays

        }

    }
    
    system("clear");
    printf("=======\n");
    printf(" SAÍDA \n");
    printf("=======\n");

    for(i=0; i<5; i++) {
        printf("%dº posição: %d\n", i+1, lista[i]);

    } //Imprime os valores na tela

    return 0;

} //Fim da função main