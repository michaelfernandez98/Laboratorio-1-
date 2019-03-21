#include <stdio.h>
#include <stdlib.h>

void saludar(void);
int dameNumero(void);
float sacaPromedio(int suma,int cantidad);
void esPrimo (int numero);

int main()
{
    char nombre[6];
    int edad;
    float altura;
    int contador=0;
    int numero;
    float promedio;
    int suma=0;
    saludar();
    int limite;

    printf("Ingrese su nombre: \n");
    scanf("%s",&nombre);
    printf("Ingrese su edad: \n");
    scanf("%d",&edad);
    printf("Ingrese su altura: \n");
    scanf("%f",&altura);
    system("cls");

    printf(" Su nombre es: %s \n Su edad es: %d \n Su altura es: %.1f \n",nombre,edad,altura);
    system("pause");
    system("cls");
    limite=dameNumero();
//5 4   4   4   4
    for(;contador<5;limite)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&numero);
        suma=suma+numero;
    }
    printf("La suma da: %d\n",suma);
    //promedio=(float)suma/contador;
    promedio=sacaPromedio(suma,contador);
    printf("El promedio es: %.1f",promedio);

    return 0;
}
void saludar(void)
    {
        printf("Hola mundo C\n");
    }
int dameNumero(void)
{
    int cantidad;
    printf("Ingrese la cantidad de interaciones:");
    scanf("%d",&cantidad);
    return cantidad;
}
float sacaPromedio(int suma,int cantidad)
{
    float promedio;
    promedio=(float)suma/cantidad;
    return promedio;
}
