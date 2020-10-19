#ifndef VALIDACIONES_H_INCLUDED
#define VALIDACIONES_H_INCLUDED

//idTipo (Validar) idColor (Validar) idMascota debe existir Validar idServicio debe existir Validar fecha Validar dia mes año

#endif // VALIDACIONES_H_INCLUDED

int validarIdTipo(eTipo type[], int tam, int id);
int validarIdColor(eColor colour[], int tam, int id);
int validarIdMascota(eMascota pets[], int tam, int id);
int validarIdServicio(eServicio service[], int tam, int id);
int validarDia(eFecha fecha[], int tam, int id);
int validarMes(eFecha fecha[], int tam, int id);
int validarAnio(eFecha fecha[], int tam, int id);
