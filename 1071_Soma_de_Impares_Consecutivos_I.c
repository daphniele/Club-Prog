#include <stdio.h>


int somaImpares (int x, int y) {
    
    int soma = 0;
    
    if (x == y) {
        return 0;
    }
    
    else if (y < x) {
        for (int i = y + 1; i < x; i++) {
            if (i % 2 != 0) {
                soma += i;
            }
        }
    }
    
    else  {
        for (int i = x + 1; i < y; i++) {
            if (i % 2 != 0) {
                soma += i;
            }
        }
    }
    
    return soma;
    
}
 
int main() {
 
    
    int X;
    int Y;
    
    scanf("%d %d", &X, &Y);
    printf("%d\n", somaImpares(X, Y));
    
    
    return 0;
}