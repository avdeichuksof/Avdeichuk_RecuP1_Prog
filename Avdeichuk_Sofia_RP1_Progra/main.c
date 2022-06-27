#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int invertirCadena(char cadena[], char aux[]);
int ordenarCharAsc(char cad[], int tam);

int main()
{
    //2
    char cadena[10]= {"UTN-FRA"};
    char aux[10];
    printf(cadena);
    invertirCadena(cadena, aux);
    printf("\nLa cadena invertida es: %s\n", aux);


    //3
    char cadena2[TAM]= {"algoritmo"};
    ordenarCharAsc(cadena2,TAM);
    printf("La cadena ordenada es: %s", cadena2);

    return 0;
}

int invertirCadena(char cadena[], char aux[])
{
    int largo;
    largo=strlen(cadena);
    int a=0;

    for(int i=largo-1; i>=0; i--)
    {
        aux[a]=cadena[i];
        a++;
    }
}

int ordenarCharAsc(char cad[], int tam)
{
    int todoOk = 0;
    int auxLetra;

    if(cad!=NULL && tam>0){
        for(int i=0;i<tam-1;i++)
            {
                for(int j=i+1;j<tam;j++)
                {
                   auxLetra=cad[i];
                    cad[i]=cad[j];
                    cad[j]=auxLetra;
                }
            }
           todoOk=1;
        }
        printf(auxLetra);
          return todoOk;
    }

