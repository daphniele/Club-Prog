#include <stdio.h>
#include <string.h>

typedef struct aumentodesalario
{

  float salario;
  char reajuste[5];
  float valorAumento;

} AumentoDeSalario;



AumentoDeSalario AplicaAumento (float salarioAtual)
{

  AumentoDeSalario sal;

  if (salarioAtual <= 400)
    {
      strcpy (sal.reajuste, "15 %");
      sal.valorAumento = salarioAtual * 0.15;
      sal.salario = salarioAtual + sal.valorAumento;
    }

  else if (salarioAtual <= 800)
    {
      strcpy (sal.reajuste, "12 %");
      sal.valorAumento = salarioAtual * 0.12;
      sal.salario = salarioAtual + sal.valorAumento;
    }

  else if (salarioAtual <= 1200)
    {
      strcpy (sal.reajuste, "10 %");
      sal.valorAumento = salarioAtual * 0.10;
      sal.salario = salarioAtual + sal.valorAumento;
    }
    
    else if (salarioAtual <= 2000)
    {
      strcpy (sal.reajuste, "7 %");
      sal.valorAumento = salarioAtual * 0.07;
      sal.salario = salarioAtual + sal.valorAumento;
    }
    
    else
    {
      strcpy(sal.reajuste, "4 %");
      sal.valorAumento = salarioAtual * 0.04;
      sal.salario = salarioAtual + sal.valorAumento;
    }


  return sal;
}

int main ()
{
    
    float salario = 0;
    AumentoDeSalario sal;    
    
    scanf("%f", &salario);
    
    sal = AplicaAumento(salario);
    
    printf("Novo salario: %.2f\n", sal.salario);
    printf("Reajuste ganho: %.2f\n", sal.valorAumento);
    printf("Em percentual: %s\n", sal.reajuste);
  

  return 0;
}
