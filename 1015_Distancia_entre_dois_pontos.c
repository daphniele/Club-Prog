#include <stdio.h>
#include <math.h>


float calculaDistancia(float x1, float y1, float x2, float y2) {
    float dist = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    return dist;
}

 
int main() {
 
    float x1, y1, x2, y2;
    
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    
    printf("%.4f\n", calculaDistancia(x1, y1, x2, y2));
   
 
    return 0;
}