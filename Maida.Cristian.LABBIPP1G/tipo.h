#ifndef TIPO_H_INCLUDED
#define TIPO_H_INCLUDED

typdef struct
{
    int id;
    char descripcion[20];
    char tipos/*[5]*/
} eTipo;


Tipo  id 1000 descripcion 20  Tipos(Ave, Perro, Gato, Roedor, Pez)



#endif // TIPO_H_INCLUDED


int harcoderarTipos(eTipo tipo[], int tam, int cantidad);
void ListarTipo(eTipo unTipo, eTipo type[], int tam);
int ListarTipos(eTipo tipo[], int tam, eTipo type[], int);
