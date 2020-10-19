#ifndef SERVICIO_H_INCLUDED
#define SERVICIO_H_INCLUDED


typedef struct
{
    int id;
    char descripcion[25];
    float precio;
    char servicios/*[3]*/;
} eServicio

// Servicio id 20000 descripcion 25 precio Servicios(Corte: $250, Desparacitado $300, Castrado: $400)

#endif // SERVICIO_H_INCLUDED

int harcoderarServicio(eServicio servicio[], int tam, int cantidad);
int ListarServicios(eColor color[], int tam, eColor colour[], int);
void ListarServicio(eColor unColor,  eColor colour[], int tam);
