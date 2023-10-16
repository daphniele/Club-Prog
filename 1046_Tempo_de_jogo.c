#include <stdio.h>

int main()
{
    
    int inicio;
    int fim;
    int duracao;
    
    scanf("%d %d", &inicio, &fim);
     
     
    if (inicio == fim) {
        
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    
    else if (fim > inicio) {
        duracao = fim-inicio;
        printf("O JOGO DUROU %d HORA(S)\n", duracao);
    }
    
    else {
        duracao = 24 - inicio + fim;
        printf("O JOGO DUROU %d HORA(S)\n", duracao);

    }
   

    return 0;
}
