#include <stdio.h>
#include <stdlib.h>


int Maior (int a, int b) {
    int maior;
    
    maior = ((a+b)+abs(a-b))/2;
    return maior;
    
}

int main()
{
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    int maior = Maior(a, b);
    maior = Maior(maior, c);
    
    printf("%d eh o maior\n", maior);

    return 0;
}

