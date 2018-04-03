#include <stdio.h>
#include <stdlib.h>
float suma(float numero1, float numero2);
float resta(float numero1, float numero2);
float multiplicacion(float numero1, float numero2);
float division(float numero1, float numero2);
float factorial(float numero);
int main()
{
    char seguir='s';
    int opcion=0;
    float numero1=0;
    float numero2=0;
    float resultado=0;

    while(seguir=='s')
    {
        printf("\n1- Ingresar 1er operando (A=%.2f)\n",numero1);
        printf("2- Ingresar 2do operando (B=%.2f)\n",numero2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Por favor, ingrese el primer operando.\n");
                scanf("%f",&numero1);
                break;
            case 2:
                printf("Por favor, ingrese el segundo operando.\n");
                scanf("%f",&numero2);
                break;
            case 3:
                resultado=suma(numero1,numero2);
                printf("El resultado de la suma es: %.2f\n\n", resultado);
                break;
            case 4:
                resultado=resta(numero1,numero2);
                printf("El resultado de la resta es: %.2f\n\n", resultado);
                break;
            case 5:

                resultado=division(numero1,numero2);
                if(resultado==0)
                {
                    break;
                }else{
                printf("El resultado de la division es: %.2f\n\n", resultado);}
                break;
            case 6:
                resultado=multiplicacion(numero1,numero2);
                printf("El resultado de la multiplicacion es: %.2f\n\n", resultado);
                break;
            case 7:
                resultado=factorial(numero1);
                printf("El factorial del primer operando es: %.2f\n\n", resultado);
                break;
            case 8:
                break;
            case 9:
                seguir = 'n';
                break;
        }

    }
    return 0;
}
float suma (float numero1, float numero2)
{
    float resultado;

    resultado=numero1+numero2;
    return resultado;
}
float resta (float numero1, float numero2)
{
    float resultado;
    /*if(numero2<0)
    {
        resultado = numero1+numero2;
    }
    else
    {resultado=numero1-numero2;
    }*/
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
        printf("La division no se puede realizar si el segundo operando es 0. Por favor ingrese otro numero\n\n");
        resultado=0;
    }
    else
    {
        resultado=numero1/numero2;
    }
    return resultado;
}
float factorial (float numero)
{
    int contador=numero-1;
    while(contador>0)
    {
        numero=numero*contador;

        contador--;
    }
    return numero;
}
