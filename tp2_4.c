#include <stdio.h>
#include <stdlib.h>
#define n 5

struct compu {
                int velocidad;//entre 1 y 3 GHz
                int anio;//entre 2015 y 2023
                int cantidad;//entre 1 y 8
                char *tipo_cpu; //valores del arreglo tipos
                };

void mostrarLista(struct compu *p_arreglo);

void main()
{
    struct compu arreglo[n], *p_arreglo;
    p_arreglo=arreglo;
    /*char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    p_arreglo->tipo_cpu=tipos;*/
    
    mostrarLista(p_arreglo);
}

void mostrarLista(struct compu *p_arreglo){
     for (int i=0; i<n; i++)
    {
        printf("\n----#%d----\n", i+1);
        p_arreglo->velocidad=1+rand()%3;
        printf("Velocidad: %d Hz.\n", p_arreglo->velocidad);
        p_arreglo->anio=2015+rand()%9;
        printf("Año: %d.\n", p_arreglo->anio);
        p_arreglo->cantidad=1+rand()%8;
        printf("Cantidad de núcleos: %d.\n", p_arreglo->cantidad);
        int ind_cpu=rand()%6;
        //p_arreglo->tipo_cpu=rand()%6;//
        //printf("Tipo de CPU: %s\n", tipos[ind_cpu]);//
    p_arreglo++;
    }
}