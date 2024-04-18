#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int max = 100;
char *nombres[MAX];
char *BUFFER=(char *)malloc(100 * sizeof (char));
int a=0,cantidad;
int main(){
    printf("Ingrese la cantidad de nombres \n ");
    scanf("%d",&cantidad);
    for(int i=0;i<cantidad;i++){                
        a++;
        printf("Ingrese el %d nombre \n ",a);
        gets(BUFFER);
        nombres[i]=(char *)malloc((strlen(BUFFER)+1) * sizeof (char));
        strcpy(nombres[i],BUFFER);
        free(BUFFER);
    }
     printf("La lista de nombres es:\n");
     int b=0;
     for(int i=0;i<5;i++){
        b++;
      printf("%d.",b);
      puts(nombres[i]);
      free(nombres[i]);
    }


    return 0;
}