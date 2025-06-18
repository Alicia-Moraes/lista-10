#include <stdio.h>
#include <stdlib.h>

int contadorRecursivo = 0; // Variável global

int main() {
    printf("%d\n", contadorRecursivo);  // Imprime o valor atual do contador
    if (contadorRecursivo < 10) {
        contadorRecursivo++;

        main();
    }
    else {
        getchar();
    }
    return 0;
}
