#include<stdio.h>
#include"funciones.h"



float suma (float numero1, float numero2)
{
    float resultado;

    resultado=numero1+numero2;
    return resultado;
}
float resta (float numero1, float numero2)
{
    float resultado;
    resultado=numero1-numero2;
    return resultado;
}
float multiplicacion (float numero1, float numero2)
{
    float resultado;

    resultado=numero1*numero2;
    return resultado;
}
float division (float numero1,float numero2)
{
    float resultado;
    if ( numero2==0)
    {

        resultado=0;
    }
    else
    {
        resultado=numero1/numero2;

    }
    return resultado;
}
long long int factorial (float numero)
{   long long int acumulador=numero;
    long long int contador=numero-1;
    while(contador>0)
    {
        acumulador=acumulador*contador;
        contador--;
    }
    return acumulador;
}
