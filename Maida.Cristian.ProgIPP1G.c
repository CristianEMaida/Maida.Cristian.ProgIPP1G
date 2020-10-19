#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos
} ePais;

void actualizarRecuperados(char nombre[], int recuperados);

int main()
{
    char cadena[20];
    char nombre[20];
    int recuperados;

    printf("Hello world!\n");
    fflush(stdin);
    scanf("%s",&nombre);
    scanf("%d",&recuperados);

    scanf("%s",&cadena);

    actualizarRecuperados(nombre, recuperados);

    invertirCadena(cadena);
    return 0;
}

void actualizarRecuperados(char nombre[], int recuperados)
{
    ePais paises;
    strcpy(paises.nombre,nombre);
    paises.recuperados=recuperados;
    //printf("%s %d\n",paises.nombre, paises.recuperados);
}

void invertirCadena(char cadena[]){
    int aux;
    int i=0;
    int j;
    for(;i<strlen(cadena)-1;i++)
    {
        for(j=i+1;j<strlen(cadena);j++)
        {
            aux= cadena[i];
            cadena[i]= cadena[j];
            cadena[j]=aux;
        }
    }
    for(i=0;i<strlen(cadena);i++)
    {
        printf("\n%c", cadena[i]);
    }
}
