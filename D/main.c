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

    ordenarCadena(cadena);
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


    for(i=0,j=strlen(cadena)-1;i<strlen(cadena)/2,;i++;j--)
    {
        for(j=i+1;j<strlen(cadena);j++)
        {
            aux= cadena[i];
            cadena[i]= cadena[j];
            cadena[j]=aux;
        }
    }
   /* for(i=0;i<strlen(cadena);i++)
    {
        printf("\n%c", cadena[i]);
    }*/
}

void ordenarCadena(char cadena[]){
    int aux;
    int i=0;
    int j;


    for(i=strlen(cadena);i>=0;i++)
    {
        for(j=i+1;j<strlen(cadena);j++)
        {
            aux= cadena[i];
            cadena[i]= cadena[j];
            cadena[j]=aux;
        }
    }
   /* for(i=0;i<strlen(cadena);i++)
    {
        printf("\n%c", cadena[i]);
    }*/
}

// invertirCadena que reciba una cadena de caracteres como parámetro y su responsabilidad es invertir los caracteres de la misma
 //. Ejemplo si le pasamos UTN-FRA la deja como ARF-NTU *
