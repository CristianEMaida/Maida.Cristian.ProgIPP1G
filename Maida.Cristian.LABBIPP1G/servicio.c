#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>/
#include <string.h>

int harcoderarServicio(eServicio servicio[], int tam, int cantidad)
{
    int error = -1
    if(servicio!= NULL && tam>0 && cantidad >=0 && cantidad <= tam)
    {
        error = 0;
        for(int i=0; i< cantidad; i++)
        {
            servicio[i].id = ids[i];
            strcpy(servicio[i].descripcion, descripciones[i]);
            strcpy(servicio[i].precios, precios[i]);
            error++;
        }
    }
    return error;
}
