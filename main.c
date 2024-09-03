#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "calculadora.h"

int main() {
    char posFixa[] = "53 23 + 8 2 - *";

    // Corrigir a chamada de getFormaInFixa
    // Alocação para a string resultante
    char inFixa[512];
    strcpy(inFixa, getFormaInFixa(posFixa));

    // Corrigir a chamada de getValor
    float valor = getValor(posFixa);

    // Exibir os resultados
    printf("Forma infixa: %s\n", inFixa);
    printf("Valor da expressão: %.2f\n", valor);

    return 0;
}

