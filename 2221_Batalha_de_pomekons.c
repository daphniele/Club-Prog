#include <stdio.h>

int verificaLevel(int level) {
    if (level%2 == 0) {
        return 1;
    }
    
    return 0;
}


float calculaGolpe (int level, int ataque, int defesa, int bonus) {
    int temBonus = verificaLevel(level);
    
    float valorGolpe = (ataque+defesa)/2;
    
    if (temBonus == 1) {
        valorGolpe += bonus;
    }
    
    return valorGolpe;
}

void calculaVencedor (float d, float g) {
    if (d == g) {
        printf("Empate\n");
    }
    
    else if (d>g) {
        printf("Dabriel\n");
    }
    
    else {
        printf("Guarte\n");
    }
}
 
int main() {
 
   int contador;
   int bonus;
   int da, dd, dl, ga, gd, gl;
   
   scanf("%d", &contador);
   
   for (int i = 0; i < contador; i++) {
       scanf("%d", &bonus);
       scanf("%d %d %d", &da, &dd, &dl);
       scanf("%d %d %d", &ga, &gd, &gl);
       
       calculaVencedor(calculaGolpe(dl, da, dd, bonus), calculaGolpe(gl, ga, gd, bonus));
   } 
   
   
    return 0;
}
