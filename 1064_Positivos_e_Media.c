#include <stdio.h>

int main()
{
    
    float numeros[6];
    int positivos = 0;
    float total = 0;
    
    for (int i = 0; i < 6; i++) {
        scanf("%f", &numeros[i]);
        if (numeros[i] > 0) {
            positivos++;
            total = total + numeros[i];
        }
    }
    
    
    printf("%d valores positivos\n", positivos);
    printf("%.1f\n", total/positivos);

    return 0;
}
