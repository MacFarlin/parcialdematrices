#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main()
{   int matriz[TAM][TAM];
    int suma [TAM];

    cargarKms (matriz, suma);
    mostrarKms (matriz, suma);
    mostrarKmsSumados (matriz, suma);


return 0;
}

void cargarKms (int matriz [TAM][TAM], int suma[TAM])
{
    int i=0,j=0;

    srand(time(NULL));
    suma [0] = 0;
    suma [2] = 0;

    for (i=0; i<TAM; i++)
    {
      for (j=0;j<TAM;j++)
        {
         matriz[i][j]= (1+rand()%10);
         suma[i]=(suma [i] + matriz [i][j]);
        }
    }

return 0;
}

void mostrarKms (int matriz [TAM][TAM], int suma [TAM])
{
    int i=0,j=0;
      printf ("\n            \t\tLun\tMar\tMier\tJue\tVie\n");
    for (i=0; i<TAM; i++)
    {
      printf ("\n Camion (%i) \t",i);

      for (j=0;j<TAM;j++)
        {
         printf ("\t %i", matriz[i][j]);
        }
    }

    printf ("\n");

return 0;
}

void mostrarKmsSumados (int matriz [TAM][TAM], int suma[TAM])
{
    int j=0;
    printf ("\n La suma de los Kms recorridos es: \n");

    for (j=0;j<TAM;j++)
        {
         printf ("\n El camion (%i) recorrio %i Kilometros",j,suma[j]);
        }

    printf ("\n");

return 0;
}


