#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroUno;
    int numeroDos;
    int resultado;
    int opcion;

    printf ("Ingrese dos numeros \n");
    scanf ("%d",&numeroUno);
    scanf ("%d",&numeroDos);

    printf("Elija una opcion 1-Suma 2-Resta 3-Division 4-Multiplicacion \n");
    scanf("%d",&opcion);

    while(opcion < 1 || opcion > 4)
    {
        printf("Opcion Incorrecta \n");
        printf("Elija una opcion 1-Suma 2-Resta 3-Division 4-Multiplicacion \n");
        scanf("%d",&opcion);
    }

    switch(opcion)
    {
       case 1:
           //Sumar
           resultado = numeroUno + numeroDos;
           printf("Resultado :%d \n",resultado);
           break;
       case 2:
           //Restar
           resultado = numeroUno - numeroDos;
           printf("Resultado :%d \n",resultado);
           break;
       case 3:
           //Dividir
           resultado = numeroUno / numeroDos;
           printf("Resultado :%d \n",resultado);
           break;
       case 4:
           //Multiplicar
           resultado = numeroUno * numeroDos;
           printf("Resultado :%d \n",resultado);
           break;

    }

   return 0;
}
