#include <stdio.h>

int main() {
    int INDICE = 12, SOMA = 0, K = 1;
    
    while (K < INDICE) {
        K = K + 1;
        SOMA = SOMA + K;
    }
    
    printf("Valor final de SOMA: %d\n", SOMA);
    
    return 0;
}
