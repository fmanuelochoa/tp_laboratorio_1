#include "calcular.h"

int getInt(char mensaje[])
{
    int auxiliar;
    printf("%s",mensaje);
    scanf("%d",&auxiliar);
    return auxiliar;
}

int suma(int a , int b)
{
    int resultado;
    resultado=a+b;
    return resultado;
}

int resta(int a, int b)
{
    int total;
    total=a-b;
    return total;
}

float validarDivision(float a, float b)
{
    if(b!=0)
    {
        return 1;
    }
    return 0;
}

float division(float a, float b)
{
    float resultado;
    int retorno=-1;
    if(validarDivision(a,b))
    {
        resultado=a/b;
        return resultado;

    }else
    {
        printf("NO SE PUEDE DIVIDIR POR CERO\n");
        return 0;
    }
    return retorno;
}

int multiplicacion(int a,int b)
{
    int resultado;
    resultado=a*b;
    return resultado;
}

int factorial (int a)
{
    int resultado;
    if(a==1)
    {
        return 1;
    }else if(a==0)
    {
        return 0;
    }
    resultado=a* factorial(a-1);
    return resultado;
}
