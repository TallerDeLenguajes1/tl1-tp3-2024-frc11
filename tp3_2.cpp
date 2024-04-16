#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int array[5][12],max,min=10000000000;
float promedio[5];

srand(time(NULL));
for(int i=0;i<5;i++){
    for(int j=0;j<12;j++){
        array[i][j]=rand() % 40001 + 10000;
        printf(" %d ",array[i][j]);
        promedio[i]+=array[i][j];
    }
    
    printf("\n");
}
int a=0,auxAMAX,auxAMIN,auxMMAX,auxMMIN;
for(int i=0;i<5;i++){
    a++;
    promedio[i]=promedio[i]/12;
    printf ("El promedio del año %d, es %f \n",a,promedio[i]);
    for(int j=0;j<12;j++){
        if(array[i][j]>max){
            max=array[i][j];
            auxMMAX=i++;
            auxAMAX=j++;
        }else if(array[i][j]<min){
            min=array[i][j];
            auxMMIN=i++;
            auxAMIN=j++;

        }
   
    }
}
printf("El mes en el que se dio mayor recaudacion, de %d fue el %d/%d \n",min,auxMMAX,auxAMAX);
printf("El mes en el que se dio menor recaudacion, de %d fue el %d/%d \n",max,auxMMIN,auxAMIN);
return 0;
}