#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>//?
#include <string.h>//?
#include "fecha.h"//?
#include "tipo.h"//?
#include "color.h"//?
#include "mascota.h"//?
#include "servicio.h"//?
#include "trabajo.h"//?
#include "validaciones.h"//?
#include "datastore.h"

#define TAM 10//?
#define TAM_D 6//?



int main()
{
    //int opcion;
    //int id=1000;
    //int contador=0;
    //eEmployee list [TAM];

    //initEmployee(list, TAM);

    char seguir = 's';
    char confirma;
    int rta;
    int proximoLegajo = 20000;
    eTipo tipos [TAM_D] = {
        {1000,"Ave"},
        {1001,"Perro"},
        {1002,"Gato"},
        {1003,"Roedor"},
        {1004,"Pez"}
    };
    eColores colores [TAM_D] = {
        {5000,"Negro"},
        {5001,"Blanco"},
        {5002,"Gris"},
        {5003,"Rojo"},
        {5004,"Azul"}
    };

    eServicio servicios [TAM_D] = {
        {20000,"Corte: $250"},
        {200001,"Desparacitado $300"},
        {20002,"Castrado: $400"}
    };


    if(inicializarMascotas(lista, TAM) == 0)
    {
        printf("Personas inicializadas con exito")
    }
    else
    {
        printf("Problema al inicializar personas...\n")
    }

    proximoLegajo += harcoderarTipos(lista, TAM, 8);
    do
    {
        switch (menu())
        {
        case 'a':
            if( altaPersona(lista, TAM, pets, TAM_D, proximoLegajo) == 0)
            {
                proximoLegajo++;
                printf("Alta exitosa!!!\n\n");
            }
            else
            {
                printf("Problema para realizar el alta");
            }
            break;
        case 'b':
            rta = bajaMascota(lista, TAM, pets[], TAM_D);
            if( rta == 0)
            {
                printf("Baja Exitosa!!!\n\n");
            }
            else if( rta == 2)
            {
                printf("La baja se ha cancelado por el usuario...\n\n");
            }
            else
            {
                printf("Se ha producido un error en la baja\n\n");
            }

            break;
        case 'c':
            rta = modificarMascota(lista, TAM, pets, TAM_D);
            if( rta == 0)
            {
                printf("Modificacion Exitosa!!!\n\n");
            }
            else if( rta == 2)
            {
                printf("La modificacion se ha cancelado por el usuario...\n\n");
            }
            else
            {
                printf("Se ha producido un error en la modificacion");
            }
            break;
        case 'd':
            system("cls");
            //mostrarMascotas(tipo, TAM_D);
            listarMascotasXTipoyNombre(lista, TAM, tipo, TAM_D);
            break;
        case 'e':
            break;
        case 'f':
            break;
        default:
            printf("Opcion invalida!!!\n");
        }

        /*confirma = tolower(confirma);
        if(confirma == 's')
        {
            seguir = 'n';
        }

        break;

    */while(seguir == 's');


    system("pause");

    char opcion;
    system("cls");

    printf("*** ABM ***\n\n");
    printf("a Alta\n");
    printf("b Baja\n");
    printf("c Modificacion\n");
    printf("d Listar Mascotas\n");
    printf("e Listar Tipos\n");
    printf("f Listar Colores\n");
    printf("g Listar Servicios\n");
    printf("h Alta Trabajo\n");
    printf("i Listar Trabajos\n");

    //printf("x Informes\n");
    //printf("y Ordenar\n");

    printf("z Salir\n\n");
    printf("Ingrese opcion: ");
    fflush(stdin);
    opcion = tolower(getchar());

    return opcion;

    printf("Hello world!\n");
    return 0;

    /*Fecha  dia mes anio
    Tipo  id 1000 descripcion 20  Tipos(Ave, Perro, Gato, Roedor, Pez)
    Color  id 5000 nombreColor 20  Colores(Negro, Blanco, Gris, Rojo, Azul)
    Mascota  id nombre 20 idTipo (Validar) idColor (Validar) edad
    Servicios  id 20000 descripcion 25 precio Servicios(Corte: $250, Desparacitado $300, Castrado: $400)
    Trabajo  id autoincremental idMascota debe existir Validar idServicio debe existir Validar fecha Validar dia mes año*/

    //idTipo (Validar) idColor (Validar) idMascota debe existir Validar idServicio debe existir Validar fecha Validar dia mes año
}

int altaMascota(ePersona mascota[], int tam, eMascota pets[], int tamD, int legajo )
//int altaMascota(eMascota mascota, int tam, eMascota pets[], int tamD, int legajo)
{
    int error = 1;
    int indice;
    int auxIdMascota;
    eMascota nuevaMascota;

    if( mascota != NULL && tam > 0 && legajo > 0)
    {
        printf(" *** Alta de Mascota ***\n\n");

        indice = buscarLibre(mascota, tam);

        if( indice == -1)
        {
            printf("El sistema esta completo.\n");
        }
        else
        {
            nuevaMascota.legajo = legajo;
            nuevaMascota.isEmpty = 0;

            printf("Ingrese id Tipo: ");
            scanf("%d", &nuevaMascota.idTipo);

            printf("Ingrese id Color: ");
            scanf("%d", &nuevaMascota.idColor);

            printf("Ingrese Edad: ");
            scanf("%d", &nuevaMascota.edad)

            mostrarMascotas(pets,tamD);

            printf("Ingrese id mascota:");
            scanf("%d", &auxIdMascota);

            while( validadIdMascota(pets, tamD, auxIdMascota) == 0){
                printf("Id inValido. ReIngrese id deporte: ");
                scanf("%d", &auxIdMascota);
            }
            nuevaMascota.idMascota = auxIdMascota;

            mascota[indice] = nuevaMascota;
            error = 0;
        }
    }

    return error;
}

int bajaMascota(eMascota mascota[], int tam, eMascota pets[], int tam)
{

}

int modificarMascota(eMascota mascota[], int tam, eMascota pets[], int tam)
{
            printf("\nIngrese id:");
            scanf("%d", &id);
            {
                printf("No existe una mascota con ese legajo.\n");
            }
            else
            {
                mostrarMascota(mascota[indice], pets, tamd);

                printf("\nIngrese nuevo idtipo:");
                scanf("%d", &nuevoId);
                mostrarId(nuevoId);
                printf("\nIngrese nueva edad:");
                scanf("%d", &nuevaEdad);
                mostrarEdad(nuevaEdad);
                printf("Confirmar modificacion?");
                fflush(stdin);
                scanf("%c", &confirma);
                if (confirma == 'c')
                {
                    mascota[indice].idTipo= nuevoId;
                    mascota[indice].edad= nuevaEdad;
                    error = 0;
                }
                else
                {
                    error = 2;
                }
            }
        }

        return error;
}

int listarMascotasXTipoyNombre(eMascota mascota, int tam, eTipo type[], int tamD)
{
    int error = 1;
    int idTipo;
    int flag = 0;
    char tipo[20];

    if( mascota != NULL && type != NULL && tam >0 && tamD >0){
        //limpiar pantalla
        //pongo un titulo
        //muestro los tipos y nombre
        //pido e ingreso id del tipo y nombre recorro el array de mascotas
        //en busca de aquellas mascotas activas que tienen el mismo en su campo idMascota
        //y cada vez que encuentro una muestro sus datos
        //si no se mostraron personas estaría bueno informarlo
        system("cls");
        printf("   *** Listado de Mascotas que ordenadas por tipo y nombre ***\n");
        mostrarMascotas(type, tamD);
        printf("Ingrese id tipo: ");
        scanf("%d", &idTipo);

        while( validarIdTipo (type, tamD, idTipo)){
            printf("Id invalido. Reingrese id tipo: ")
            scanf("%d", &idTipo);
        }

        obtenerDescripcionTipo(type, tamD, idTipo, tipo)
        printf("Mascotas que practican %s:\n", tipo);

        for(int i=0; i < tam; i++){
            if(gente[i].isEmpty == 0 && gente[i].idTipo == idTipo){
                mostrarMascotas(persona[i], type, tamD);
                flag = 1;
            }
        }

        if( flag == 0){
            printf("No hay personas que practiquen %s\n\n", tipo);

        }
        printf("\n\n");


        error = 0;
    }
    return error;
}

int listarTipos(eTipo tipo, int tam, eTipo type[], int tamD)
{

}


int listarColores(eColor color, int tam, eColor colour[], int tamD)
{

}


int listarServicios(eMascota mascota, int tam, eTipo type[], int tamD)
{
}



void ListarTrabajos(eMascota unaMascota, eMascota pets[], int tam)
{
    char descMascota[20];
    if( obtenerDescripcionMascota(pets, tam, unaMascota.idMascota, descMascota)==0)
    {
        printf(" %4d    %10d    %d  %0d/%02d/%d \n");
            unaPersona.legajo,
            unaPersona.idMascota,
            unaPersona.idServicio,
            unaPersona.fNac.dia,
            unaPersona.fNac.mes,
            unaPersona.fNac.anio
        //system("cls");
        printf("    Legajo  Id Mascota  Id Servicio F. Nacimiento")
    int flag = 0;

    if( mascota != NULL && tam > 0)
    {
        //system("cls")
        printf("    Legajo  Id Mascota  Id Servicio F. Nacimiento");
        printf("----------------------------------------");

        for(int i= 0; i < tam; i++)
        {
            if( mascota[i].IsEmpty == 0)
            {
                mostrarPersona(gente[i], sports, tamD);
                flag = 1;
            }
        }
        if( flag == 0)
        {
            printf("    No hay mascotas en la lista");
        }
        printf("\n\n");

        error = 0;
    }
    return error;
}



//int inicializarMascotaMascota(eMascota mascota[], tam)
int inicializarMascota(eMascota mascota[], int tam);
{
    int error = 1;

    if(mascota != NULL && tam > 0){
        for(int i=0; i < tam; i++)
        {
            mascota[i].isEmpty = 1;
        }
        error = 0;
    }
    return error;
}

int buscarLibre(eMascota mascota[], int tam)
{
    int indice = -1;

    for(int i=0; i < tam; i++)
    {
        if( mascota[i].isEmpty == 1)
        {
            indice = i;
            break;
        }
    }
    return indice;
}



int ordenarMascotasNombre(eMascotas mascota[], int tam, int criterio)
{
    int error = 1;
    eMacota auxMascota;

    if(mascota!=NULL && tam>0 && criterio>=0 && criterio<=1)
    {
        for(int i=0; i<tam -1; i++)
        {
            for(int j=i+1; j<tam; j++)
            {


            }
        }
    }

}


int mostrarMascotas(eMascota mascota[], int tam, eMascota pets[], int)
{

}
int validarIdMascota(eMascota pets[], int tam, int id)
{

}
int validarIdTipo(eMascota pets[], int tam, int id)
{

}
int validarIdColor(eMascota pets[], int tam, int id)
{

}
int validarIdMascota(eMascota pets[], int tam, int id)
{
    int esValido = 0;

    if( pets !=NULL && tam>0 && id >= 1000)
    {
        for(int i=0; i<tam; i++)
        {
            if( pets[i].id == id)
            {
                esValido = 1;
                break;
            }
        }
    }
    return esValido;
}
int validarIdServicio(eServicio service[], int tam, int id)
{

}
int validarDia(eFecha fecha[], int tam, int id)
{

}
int validarMes(eFecha fecha[], int tam, int id)
{

}
int validarAnio(eFecha fecha[], int tam, int id)
{

}

int obtenerDescripcionServicio(eServicio service[] int tam, int id, char descripcion[])
{
    int error=1;
    if(service!=NULL&&tam>0 && id>=1000&&descripcion!=NULL)
    {
        for(int i=0;i<tam;i++)
        {
            if(pets[i].id=id)
            {
                strcpy(descripcion,service[i].descripcion);
                error=0;
                break;
            }
        }
    }
    return error;
}


int ordenarMascotasTipoNombre(eMascota mascota[], int tam, int criterio)
{
    int error = 1;
    eMacota auxMascota;

    for(int i=0; i<tam -1; i++)
    {
        for(int j=i+1; j<tam; j++)
        {
            if(mascota!=NULL && tam>0 && criterio>=0 && criterio<=1)
            {
                auxMascota = mascota[i];
                mascota[i] = mascota[j];
                mascota[j] = auxMascota;

            }
            else if(mascota[i].nombre < mascota[j].nombre && criterio == 0)
            {
                auxMascota = mascota[i];
                mascota[i] = mascota[j];
                mascota[j] = auxMascota;
            }
            else if(mascota[i].nombre == mascota[j].nombre && mascota[i].tipo > mascota[j].tipo && criterio == 1)
            {
                auxMascota = mascota[i];
                mascota[i] = mascota[j];
                mascota[j] = auxMascota;
            }
            else if(mascota[i].nombre == mascota[j].nombre && mascota[i].tipo < mascota[j].tipo && criterio == 0)
            {
                auxMascota = mascota[i];
                mascota[i] = mascota[j];
                mascota[j] = auxMascota;
            }

        }
    }



}
/*int ordenarMascotasNombre(eMascota mascota[], int tam, int criterio)
{

}*/

/*
int listarPersonasDeCadaDeporte(ePersona gente[], int tam eDeporte sports[], int tamD)
{
	int error = 1;
	//int idDeporte;
	int flag = 0;
	char deporte[20];

	if( gente != NULL && sports != NULL && tam >0 && tamD > 0)
	{
		system("cls");
		printf(" *** Listado de Personas de cada deporte ***\n");

		for(int d = 0; d < tamD; d++)
		{
			flag = 0;
			obtenerDescripcionDeporte(sports, tamD, sports[d].id, deporte);
			printf("Deporte: %s\n", deporte);

			for(int i=0; i < tam; i++)
			{
				if(gente[i].isEmpty == 0 && gente[i].idDeporte == sports[d].id)
				{
					mostrarPersona(gente[i], sports, tamD;
					flag = 1;
				}
			}

			if( flag == 0)
			{
				printf("No hay personas que practiquen %s\n\n", deporte);
			}
			printf("\n\n");
		}
		error = 0;
	}
    return error;
}
*/



int contarMascotasXTipoyNombre(eMascota mascota, int tam, eTipo type[], int tamD)
{
    int error = 1;
    int idTipo;
    char tipo[20];
    int contador = 0;

    if( mascota != NULL && type != NULL && tam >0 && tamD >0){
        //limpiar pantalla
        //pongo un titulo
        //muestro los tipos y nombre
        //pido e ingreso id del tipo y nombre recorro el array de mascotas
        //en busca de aquellas mascotas activas que tienen el mismo en su campo idMascota
        //y cada vez que encuentro una muestro sus datos
        //si no se mostraron personas estaría bueno informarlo
        system("cls");
        printf("   *** Cantidad de Mascotas que ordenadas por tipo y nombre ***\n");
        mostrarMascotas(type, tamD);
        printf("Ingrese id tipo: ");
        scanf("%d", &idTipo);

        while( validarIdTipo (type, tamD, idTipo)){
            printf("Id invalido. Reingrese id tipo: ")
            scanf("%d", &idTipo);
        }

        for(int i=0; i < tam; i++){
            if(gente[i].isEmpty == 0 && gente[i].idTipo == idTipo){
                contador++;
            }
        }

        obtenerDescripcionTipo(type, tamD, idTipo, tipo);

        printf("Cantidad personas que practiquen %s: %d\n\n", tipo, contador);

        error = 0;
    }
    return error;
}

int deporteFavorito(ePersona gente[], int tam, eDeporte sports[], int tamD)
{
    int error = 1;
    char deporte[20];
    int contadores[tamD];
    for(int i=0; i < tamD; i++)
    {
        contadores[i] = 0;
    }


    int( gente != NULL && sports != NULL && tam >0 && tamD > 0)
    {
        system("cls");
        printf("   *** Deporte Favorito ***\n");
        for(int d = 0; d < tamD; d++)
        {
            for(int i=0; i < tam; i++)
            {
                if(gente[i].isEmpty == 0 && gente[i].idDeporte == sports[d].id)
                {
                   contadores[d]++;
                }
            }
        }

        for(int i=0; i < tamD; i++){
            if(contadores[i] > Imayor || flag == 0){
                mayor = contadores[i];
                flag = 1;
            }
        }

        printf("El o los deportes favoritos son: \n\n");

        for(int i=0; i<tamD; i++){
            if( contadores[i] == mayor){
                printf("%s\n", sports[i].descripcion );
            }
        }

        printf("\n\n");

        error = 0;
    }
    return error;
}

ordenarXDeporte(ePersona gente[], int tam/**/, eDeporte sports[], int tamD/**/, int criterio){
    int error = 1;
    ePersona auxPersona;
    char deporte[20];
    char deporteJ[20];


    if( gente != NULL && tam > 0 && sports != NULL && criterio >= 0)
    {
        for(int i=0; i < tam -1; i++)
        {
            for(int j= i +1; j < tam; j++)
            {
                obtenerDescripcionDeporte(sports, tamD, gente[i].idDeporte, deporteI);
                obtenerDescripcionDeporte(sports, tamD, gente[j].idDeporte, deporteJ);
                if( ((strcmp(deporteI, deporteJ) > 0) && criterio)
                    ||(( strcmp(deporteI, deporteJ) <
                         0 && ! criterio)/*(gente[i].idDeporte > gente[j].idDeporte && criterio)
                || (gente[i].idDeporte < gente[j].idDeporte && !criterio))*/
                    /*gente[i].nombre, gente[j].nombre) > 0 && criterio)
                   || ((strcmp(gente[i].nombre, gente[j].nombre) < 0 && !criterio*/)
                   {
                       auxPersona = gente[i];
                       gente[i] = gente[j];
                       gente[j] = auxPersona;
                   }
            }
        }
    }
    error = 0;

    return error;
}
