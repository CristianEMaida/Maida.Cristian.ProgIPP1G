#ifndef TRABAJO_H_INCLUDED
#define TRABAJO_H_INCLUDED

typedef struct
{
    int id;
    int idMascota;
    bFecha FNac;
}

   Trabajo  id autoincremental idMascota debe existir Validar fecha Validar dia mes año


#endif // TRABAJO_H_INCLUDED


void ListarTrabajos(eTrabajo unTrabajo, eTrabajo works[], int tam);
int ListarTrabajo(eMascota mascota[], int tam, eMascota pets[], int);
