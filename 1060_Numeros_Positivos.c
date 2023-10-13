#include <stdio.h>

int main()
{
    
    float numeros[6];
    int positivos = 0;
    
    for (int i = 0; i < 6; i++) {
        scanf("%f", &numeros[i]);
        if (numeros[i] > 0) {
            positivos++;
        }
    }
    
    printf("%d valores positivos\n", positivos);

    return 0;
}

