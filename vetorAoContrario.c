#include <stdio.h>

void imprimirAoContrario(char vetor[], int pos) {
    // caso base → quando chega no final da string
    if (vetor[pos] == '\0') {
        return;
    }
    
    // chamada recursiva → vai até o final primeiro
    imprimirAoContrario(vetor, pos + 1);

    // na "volta" da recursão, imprime os caracteres
    printf("%c", vetor[pos]);
}

int main() {
    char palavra[100];
    
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("Invertida: ");
    imprimirAoContrario(palavra, 0);

    printf("\n");
    return 0;
}
