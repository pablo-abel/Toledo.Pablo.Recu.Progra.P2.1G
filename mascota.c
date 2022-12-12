#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "mascota.h"

eMascota* new_Mascota()
{
    eMascota* auxM = NULL;
    auxM = (eMascota*) malloc(sizeof(eMascota));
    return auxM;
}

eMascota* new_MascotaBase()
{
    eMascota* nuevaMascota;
    nuevaMascota = (eMascota*) malloc(sizeof(eMascota));
    if(nuevaMascota != NULL)
    {
        nuevaMascota->id = 0;
        strcpy(nuevaMascota->nombre, "NN");
        strcpy(nuevaMascota->tipo, "NN");
        nuevaMascota->edad = 0;
        nuevaMascota->altura = 0.00;
    }
    return nuevaMascota;
}

eMascota* newMascotaParam(int id, char* nombre, char* tipo, int edad, float altura)
{
    eMascota* nuevaMascota = NULL;
    nuevaMascota = new_Mascota();
    if(nuevaMascota != NULL)
    {
        nuevaMascota->id = id;
        strcpy(nuevaMascota->nombre, nombre);
        strcpy(nuevaMascota->tipo, tipo);
        nuevaMascota->edad = edad;
        nuevaMascota->altura = altura;
    }
    return nuevaMascota;
}

void mostrarMascota(eMascota* mascota)
{
    printf("\n %4d    %-6s  %-6s  %d   %.2f\n", mascota->id, mascota->nombre, mascota->tipo, mascota->edad, mascota->altura);
}
