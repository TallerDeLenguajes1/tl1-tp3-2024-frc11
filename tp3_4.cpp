#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char *TiposProductos[]={“Galletas”,”Snack”,”Cigarrillos”,”Caramelos”,”Bebidas”};
struct Producto {
int ProductoID; //Numerado en ciclo iterativo
int Cantidad; // entre 1 y 10
char *TipoProducto; // Algún valor del arreglo TiposProductos
float PrecioUnitario; // entre 10 - 100
}typedef Producto;
struct Cliente {
int ClienteID; // Numerado en el ciclo iterativo
char *NombreCliente; // Ingresado por usuario
int CantidadProductosAPedir; // (aleatorio entre 1 y 5)
Producto *Productos //El tamaño de este arreglo depende de la variable
// “CantidadProductosAPedir”
}typedef Cliente;

int main(){
    srand(time(NULL));
    int cantidad=0;
    *BUFFER=(char *)malloc(100 * sizeof (char));
    printf("Ingrese la cantidad de clientes (maximo 5): \n");
    scanf("%d",&cantidad);
    Cliente *cliente=(Cliente*) malloc(cantidad * sizeof(cliente))
    int a=0,b=0;
    for(int i=0;i<cantidad;i++){
        a++;
        Cliente[i].ClienteID=i;
        printf("Ingrese el nombre del cliente n° %d: \n",a);
        gets(BUFFER);
        Cliente[i].NombreCliente=(char *)malloc((strlen(BUFFER)+1) * sizeof (char));
        strcpy(Cliente[i].NombreCliente, BUFFER);
        Cliente[i].CantidadProductosAPedir=rand() % 5 + 1;
        for(int j=0;j<Cliente[i].CantidadProductosAPedir;j++){
            Cliente[i].Productos=(Producto *)malloc(Cliente[i].CantidadProductosAPedir * sizeof(Producto));
            Cliente[i].Productos[j].ProductoID=j;
            printf("Ingrese la cantidad del producto: \n");
            scanf("%d",&Cliente[i].Productos[j].Cantidad);
            printf("Seleccione el tipo: \n
            1.Galletas \n
            2.Snack \n
            3.Cigarrillos \n
            4.Caramelos \n
            5.Bebidas \n");
            scanf("%d",&b);
            b--;
            strcpy(Cliente[i].Productos[j].TipoProducto,TiposProductos[b]);
            printf("Ingrese el precio unitario: \n");
            scanf("%f",&Cliente[i].Productos[j].PrecioUnitario);

        }
        


        
    }
    return 0;
}