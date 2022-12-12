#ifndef MASCOTA_H_INCLUDED
#define MASCOTA_H_INCLUDED

typedef struct
{
    int id;
    char nombre[20];
    char tipo[20];
    int edad;
    float altura;

}eMascota;

eMascota* new_Mascota();
eMascota* new_MascotaBase();
eMascota* newMascotaParam(int id, char* nombre, char* tipo, int edad, float altura);

#endif // MASCOTA_H_INCLUDED

void mostrarMascota(eMascota* mascota);
