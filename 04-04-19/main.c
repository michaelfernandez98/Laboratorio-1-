#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mostrarVector(int datos[][10],int tamanio);
void mostrarPalabras(char datos[],int tamanio);
void cargarVector(int datos[],int tamanio);
void ordenarVector(int datos[],int tamanio);

int main()
{
    char usuario[][10]= {"Jose","Maria","Jesus","Melchor","Gaspar"}; //10 columnas y 10 filas
    int nota[10]= {8,5,2,10,3};
    int i;
    int j;
    mostrarVector(nota,5);
    printf("Ingrese usuario :");
    //scanf("%s",usuario[0]);
    gets(usuario[i]);
    /*printf("Ingrese usuario :");
    scanf("%s",usuario[1]);*/

    /for(i=0; i<5; i++)
    {
        printf("Alumno :%s nota :%d \n",usuario[i],nota[i]);
    }
    printf("\n\n\n");
    for(i=0; i<5; i++)
    {
        for(j=0; j<4; j++)
        {
            if(strcmp(usuario[i],usuario[j])==-1)
            {
                int aux=nota[i];
                nota[i]=nota[j];
                nota[j]=aux;

                char auxString[10];
                strcpy(auxString,usuario[i]);
                strcpy(usuario[i],usuario[j]);
                strcpy(usuario[j],auxString);
            }
            //##funcion gets nos permite leer un string directamente
            /* printf("%d => %d  \n",nota[i],nota[j]);
             //mal if(usuario[i]<usuario[j]);
             int resultado;
             resultado=strcmp("hola","hola");//0
             printf("\niguales :%d",resultado);

             resultado=strcmp("Hola","hola");//-1
             printf("\nprimera :%d",resultado);

             resultado=strcmp("hola","Hola");//1
             printf("\nsegunda :%d",resultado);

             resultado=strcmp("A","a");//-1
             printf("\nla A :%d",resultado);

             resultado=strcmp("a","b");
             printf("\nla a-b :%d",resultado);

             resultado=strcmp("b","a");
             printf("\nla b-a :%d",resultado);


             resultado=strcmp(usuario[i],usuario[j]);
             if(resultado==1)
             {
                 int aux=nota[i];
                 nota[i]=nota[j];
                 nota[j]=aux;

                 char auxString[10];
                 strcpy(auxString,usuario[i]);
                 strcpy(usuario[i],usuario[j]);
                 strcpy(usuario[j],auxString);
             }*/
        }
    }

    //##ordenamiento por nota;
    /*
    printf("\n\n");
    for(i=0; i<5; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d => %d  \n",nota[i],nota[j]);
            if(nota[i]>nota[j])
            {
                int aux=nota[i];
                nota[i]=nota[j];
                nota[j]=aux;

                char auxString[10];
                strcpy(auxString,usuario[i]);
                strcpy(usuario[i],usuario[j]);
                strcpy(usuario[j],auxString);
            }
        }
    }*/
    /*for(i=0; i<5; i++)
    {
        printf("Alumno :%s nota :%d \n",usuario[i],nota[i]);
    }*/


    //inicializacion de arrays en paralelo
    /*for(i=0; i<5; i++)
    {
        //usuario[i][10]=" ";
        strcpy(usuario[i]," " );
        //nota[i]=0;
    }*/
    // strcpy(usuario[0],"hola");
    //printf("hola %s \n",usuario[i][0]);
    /*printf("hola %s \n",usuario[0]);
    printf("hola %s \n",usuario[1]);
    */
    /*for(i=0; i<2; i++)
    {
        printf("ingrese usuario : %d\n",usuario[i],nota);
    }*/

    /*printf("Ingrese usuario :");
    //scanf("%s",usuario[0]);
    gets(usuario[i]);
    printf("Ingrese usuario :");
    scanf("%s",usuario[1]);*/


    /*int tamanio= strlen(usuario[8]);//mide el tamaño de la palabra hasta \0
    printf("tamaño =%d  \n",tamanio);*/

    /*for(i=0; i<10; i++)
    {
        printf("Hello %s \n",usuario[i]);
    }*/
    //carga secuencial de arrays en paralelo
    /* for(i=0; i<5; i++)
     {
         printf("ingresar usuario # %d: ",i+1);
         scanf("%s",usuario[i]);

         printf("ingresa nota # %d:",i);
         scanf("%d",nota[i]);
     }*/




    return 0;
}

void mostrarVector(int datos [],int tamanio)
{
    int i;
    for(i=0; i<tamanio; i++);
    {
        printf("nota :%d \n",datos[i]);
    }
}

