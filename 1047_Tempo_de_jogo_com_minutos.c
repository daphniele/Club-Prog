##include <stdio.h>

int main()
{
    
    int horaInicio;
    int minutoInicio;
    int horaFim;
    int minutoFim;
    
    int duracaoHora;
    int duracaoMinuto;
    
    scanf("%d %d %d %d", &horaInicio, &minutoInicio, &horaFim, &minutoFim);
     
    if (horaInicio == horaFim && minutoInicio == minutoFim) {
        
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    
    else if (minutoFim > minutoInicio) {
        duracaoMinuto = minutoFim-minutoInicio;
        
        if (horaFim> horaInicio) {
            duracaoHora = horaFim-horaInicio;
            
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracaoHora, duracaoMinuto);
            
        }
        
        else if (horaFim == horaInicio) {
            printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n", duracaoMinuto);
            
        }
        
        else {
            duracaoHora = 24-horaInicio + horaFim;
            
             printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracaoHora, duracaoMinuto);
            
        }
        
    }
    
    else if (minutoFim < minutoInicio) {
        
        duracaoMinuto = minutoFim + 60 - minutoInicio;
        
        if (horaFim > horaInicio) {
            duracaoHora = horaFim-horaInicio-1;
            
             printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracaoHora, duracaoMinuto);
        }
        
        else {
            
            duracaoHora = 24-horaInicio+ horaFim -1;
            
             printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracaoHora, duracaoMinuto);
            
        }
    }
   

    return 0;
}
