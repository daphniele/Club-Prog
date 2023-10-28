#include <stdio.h>
 
int main() {
 
   int n;
   
   scanf("%d", &n);
   
   int rpm[n];
   
   for (int i = 0; i < n; i++) {
       scanf("%d", &rpm[i]);
   }
   
   int pos = 0;
   
   for (int i = 1; i < n; i++) {
       if (rpm[i] < rpm[i-1]) {
           pos = i +1;
           break;
       }
  }
  
  printf("%d\n", pos);
   
 
    return 0;
}