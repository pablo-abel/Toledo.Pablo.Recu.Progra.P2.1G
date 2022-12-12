#include <stdio.h>
#include <stdlib.h>
#include "mascota.h"

int main()
{

    eMascota* mascota;
    eMascota* mascota2;

    mascota = newMascotaParam(1, "pancho", "Perro", 2, 25);
    mostrarMascota(mascota);

    FILE* f = fopen("archivo.txt", "w");
    if(f == NULL)
    {
       printf("NO se pudo abrir el archivo:");
       exit(1);
    }
    fprintf(f, "id,Nombre,Tipo,Edad,Altura\n");
    fprintf(f, "%d  %s %s  %d  %.2f\n",mascota->id, mascota->nombre, mascota->tipo, mascota->edad, mascota->altura);
    fclose(f);

    mascota2 = newMascotaParam(2, "guido", "gato", 4, 10);
    mostrarMascota(mascota2);
    f = fopen("archivo.bin", "wb");
    if(f == NULL)
    {
       printf("NO se pudo abrir el archivo:");
       exit(1);
    }
    fwrite(mascota2, sizeof(eMascota), 1, f);
    fclose(f);
    return 0;
}
