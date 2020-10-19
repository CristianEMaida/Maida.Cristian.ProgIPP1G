#ifndef MASCOTA_H_INCLUDED
#define MASCOTA_H_INCLUDED

typedef struct
{
    int idMascota;
    char nombre[20];
    int idTipo;
    int idColor;
    int edad;
    int isEmpty //1 estaVacia 0 estaLlena

} eMascota;

// Mascota  idMascota nombre 20 idTipo (Validar) idColor (Validar) edad


#endif // MASCOTA_H_INCLUDED

#define ASC 1
#defint DESC 0

char menu();
//mostrarFecha
int inicializarMascota(eMascota mascota[], int tam);
int listarMascotasXTipoyNombre(eMascota mascota, int tam, eTipo type[], int tamD);
//int contarMascotasXTipoyNombre(eMascota mascota, int tam, eTipo type[], int tamD);
//int listarPersonasDeCadaDeporte(ePersona gente[], int tam eDeporte sports[], int tamD);
int mostrarMascotas(eMascota mascota[], int tam, eMascota pets[], int id);
void ListarMascota(eMascota unaMascota, eMascota pets[], int tam);
int buscarLibre(eMascota mascota[], int tam);
int altaMascota(ePersona mascota[], int tam, eMascota pets[], int tamD, int legajo );
int bajaMascota(eMascota mascota[], int tam, eMascota pets[], int tam);
int modificarMascota(eMascota mascota[], int tam, eMascota pets[], int tam);
int buscarMascota(eMascota mascota[], int tam[], int legajo);
//int ordenarMascotasTipo(eMascota mascota[], int tam, int criterio);
//int ordenarMascotasNombre(eMascota mascota[], int tam, int criterio);
int ordenarMascotasTipoNombre(eMascota mascota[], int tam, int criterioS, int criterioA);
//ordenarXDeporte(ePersona gente[], int tam, eDeporte sports[], int tamD, int criterio);
int obtenerDescripcionMascota(eMascota pets[], int tam, int id, char descripcion[]);
