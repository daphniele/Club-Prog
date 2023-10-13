#include <stdio.h>

int main()
{
    
  int tamanho;
  int in = 0;
  int out = 0;
  
  scanf("%d", &tamanho);
  
  int inteiros[tamanho];
  
  for (int i = 0; i < tamanho; i++) {
      scanf("%d", &inteiros[i]);
      if (inteiros[i] >= 10 && inteiros[i] <= 20) {
          in++;}
      else {
          out++;
      }
      
  }
  
  printf("%d in\n%d out\n", in, out);

    return 0;
}

