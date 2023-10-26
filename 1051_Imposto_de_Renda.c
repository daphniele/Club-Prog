#include <stdio.h>


int main()
{
    
    float salario;
    float imposto;
    
    scanf("%f", &salario);
    
    if (salario > 4500.00) {
        
        imposto = ((salario-4500.00) * 0.28) + (1499.99 * 0.18) + (999.99 * 0.08);
        printf("R$ %.2f\n", imposto);
    }
    
    else if (salario > 3000.00) {
        imposto = ((salario-3000.00) * 0.18) + (999.99 * 0.08);
        printf("R$ %.2f\n", imposto);
    }
    
    else if (salario > 2000.00) {
        imposto = (salario-2000.00) * 0.08;
        printf("R$ %.2f\n", imposto);
    }
    
    else {
        printf("Isento\n");
    }
    

    return 0;
}
