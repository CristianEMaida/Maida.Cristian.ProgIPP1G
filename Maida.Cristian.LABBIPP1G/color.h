#ifndef COLOR_H_INCLUDED
#define COLOR_H_INCLUDED

typedef struct
{
    int id;
    char nombreColor/*5*/[20];
} eColor;

//Color  id 5000 nombreColor 20  Colores(Negro, Blanco, Gris, Rojo, Azul)

#endif // COLOR_H_INCLUDED


int ListarColores(eColor color[], int tam, eColor colour[], int);
void ListarColor(eColor unColor, eColor colour[], int tam);
int hardcodearColores(eMascota gente[], int tam, int cantidad);
