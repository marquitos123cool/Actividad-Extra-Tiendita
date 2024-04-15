#include <stdio.h>
#include <stlib.h>
#include <string.h>
#include "funciones.h"

int main(void){

    int menu;
    int Administar;
    int Cobrar
    char **nom=NULL;
    float *precios=NULL;
    int *can=NULL;
    int numProdu=0;

    printf("MENU");
    printf("\n");
    printf("\n1) Administar");
    printf("\n2) Cobrar");
    printf("\n3) Salir");
    
    switch(menu){

        case 1:
        printf("\n1) Registar producto");
        printf("\n2) Eliminar producto");
        printf("\n3) Modificar producto");
        
        switch(Administar){

            case 1:

            regis_Produ(&nom, &precios, &can, &numProdu);
                break;
            case 2:
            elim_Produ(&nom, &precios, &can, &numProdu);
                break;
            case 3:

                break;
            default:
                printf("Eso no se puede unu.\n");
                break;
        }
        

            break;
        
        case 2:

    printf("\n1) Mostrar productos de tienda");
    printf("\n2) Agregar producto al carrito");
    printf("\n3) Cobrar productos del carrito");
    printf("\n4) Generar recibo de compra");
        
        switch(Cobrar){

            case 1:
            Mostrar_Produ(&nom, &precios, &can, &numProdu);
                break;
            case 2:

                break;
            case 3:

                break;
            default:
                printf("Eso no se puede unu.\n");
                break;
        }
        
            break;

        case 3:
            printf("Bye bye :D.\n");
            return 0;
                break;
            
        default:
            printf("Eso no se puede unu.\n");
            break;


    }
    return 0;

}