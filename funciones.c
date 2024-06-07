#include <stdio.h>
#include "funciones.h"
#include<string.h>
void listarProductos(char productos[][3][40],double precio[],int indice[]){
    printf("numero\t\tmombre\t\tcategoria\t\tmarca\t\tprecio\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t\t%s\t\t%s\t\t%s\t\t%lf\n",indice[i],productos[i][0],productos[i][1],productos[i][2],precio[i]);
    }
}
void buscarXMarca(char productos[][3][40],double precio[]){
    char marca[40];
    printf("ingrese la marca que desea buscar: ");
    scanf("%s",&marca);
    for (int i = 0; i < 10; i++)
    {
       if (strcmp(productos[i][2],marca)==0)
       {
        printf("%s\t\t%s\t\t%s\t\t%lf\n",productos[i][0],productos[i][1],productos[i][2],precio[i]);
       }
       
    }
    
}
void buscarXCategoria(char productos[][3][40],double precio[]){
    char marca[40];
    printf("ingrese la categoria que desea buscar: ");
    scanf("%s",&marca);
    for (int i = 0; i < 10; i++)
    {
       if (strcmp(productos[i][1],marca)==0)
       {
        printf("%s\t\t%s\t\t%s\t\t%lf\n",productos[i][0],productos[i][1],productos[i][2],precio[i]);
       }
       
    }
}
void buscarXPrecioMenor(char productos[][3][40],double precio[]){
     double marca ;
    printf("ingrese el precio maximo de los productos a buscar : ");
    scanf("%lf",&marca);
    for (int i = 0; i < 10; i++)
    {
       if (precio[i]<=marca)
       {
        printf("%s\t\t%s\t\t%s\t\t%lf\n",productos[i][0],productos[i][1],productos[i][2],precio[i]);
       }
       
    }
}
void editarProducto(char productos[][3][40],double precio[], int indice[]){
    listarProductos(productos,precio,indice);
    int numero;
    char marca[40],cat[40],nombre[40];
    double pre;
    printf("ingrese el numero del producto que desea editar:");
    scanf("%d",&numero);
    for ( int i = 0; i < 10; i++)
    {
        if (indice[i]==numero)
        {
            printf("ingrese el nuevo nombre del producto: ");
            scanf("%s",&nombre);
             printf("ingrese la nueva categoria del producto: ");
            scanf("%s",&cat);
             printf("ingrese la nueva marca del producto: ");
            scanf("%s",&marca);
             printf("ingrese el nuevo precio del producto: ");
            scanf("%lf",&pre);
            strcpy(productos[i][0],nombre);
            strcpy(productos[i][1],cat);
            strcpy(productos[i][2],marca);
            precio[i]=pre;
        }
        
    }
    
}