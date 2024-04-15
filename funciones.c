#include <stdio.h>
#include <stlib.h>
#include <string.h>
#include "funciones.h"


//seccion de administar
void regis_Produ(char ***nom,float **precios,int **can,int *numProdu){


    char nomm[50];
    float precio;
    int can;

    printf("Nombre del producto: ");
    scanf("%s", nomm);
    printf("Precio del producto: ");
    scanf("%f", &precio);
    printf("Cantidad del producto: ");
    scanf("%d", &cann);

    *nom=(char **)realloc(*nom,(*numProdu+1) * sizeof(char *));
    (*nom)[*numProdu] = strdup(nomm);

    *precios=(float *)realloc(*precios,(*numProdu+1)* sizeof(float));
    (*precios)[*numProdu]=precio;

    *can=(int *)realloc(*can, (*numProdu+1)* sizeof(int));
    (*can)[*numProdu] = cann;

    (*numProdu)++;
    printf("Producto registrado :)).\n");
}

void elim_Produ(char ***nom, float **precios, int **can, int *numProdu){

    if (*numProdu==0){
        printf("No hay productos para eliminar.\n");
        return;}

    printf("Lista de productos:\n");
    for (int i=0;i< *numProdu; i++) {
        printf("%d.%s\n",i+1,(*nom)[i]);
}

    int n;
    printf("Numero de productos que desea eliminar: ");
    scanf("%d", &n);

    if (n<1||n>*numProdu){
        printf("No se puede esa cantidad :(\n");
        return;
    }

 free((*nom)[n-1]);

    for (int i=n-1;i<*numProdu-1;i++){

        (*nom)[i]=(*nom)[i+1];
        (*precios)[i]=(*precios)[i+1];
        (*can)[i]=(*can)[i+1];
    }

    *nom=(char **)realloc(*nom, (*numProdu-1)* sizeof(char *));
    *precios=(float *)realloc(*precios, (*numProdu-1)* sizeof(float));
    *can=(int *)realloc(*can, (*numProdu-1)* sizeof(int));
    
    (*numProdu)--;
    printf("Producto eliminado ;).\n");
}



//secion de cobrar
void Mostrar_Produ(char **nom, float *precios, int *can, int numProdu){

    printf("Productos de la Tienda: \n");
    
    for (int i=0;i<numProductos;i++){
        printf("%d. %s-Precio: %.2f-Cantidad: %d\n",i+1, nom[i], precios[i], can[i]);}

}

