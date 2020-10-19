#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int harcoderarTipos(eTipo tipo[], int tam, int cantidad)
{
    int error = -1
    if(tipo!= NULL && tam>0 && cantidad >=0 && cantidad <= tam)
    {
        error = 0;
        for(int i=0; i< cantidad; i++)
        {
            tipo[i].id = ids[i];
            strcpy(tipo[i].descripcion, descripciones[i])
            error++;
        }
    }
    return error;
}
