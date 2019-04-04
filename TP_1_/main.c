#include <stdio.h>
#include <stdlib.h>
#include "calcular.h"



int main()
{
    int a,b,c,d,f,g,h;
    float e;
    a = getInt("Ingrese un numero \n");
    b = getInt("Ingrese otro numero \n");
    c = suma(a,b);
    d = resta(a,b);
    e = division(a,b);
    f = multiplicacion(a,b);
    g = factorial(a);
    h = factorial(b);
    printf("la division es %.1f\n",e);
    printf("la resta es %d\n",d);
    printf("la suma es %d\n",c);
    printf("la multiplicacion es %d\n",f);
    printf("el factorial de %d es %d\n",a,g);
    printf("el factorial de %d es %d\n",b,h);
    return 0;
}


