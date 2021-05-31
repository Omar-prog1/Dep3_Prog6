#include <stdio.h>
/*Dep3_Prog6:
Cuente el número de veces que ahorras y nos diga el total de ahorro*/


int main()
{
    int banco = 0;
    int monto = 0;
    int numdepositos = 0;
    char respuesta1 = 'S';
    char respuesta2 = 'N';


    
do
{
    printf("\n\n Banco de ahorro ");
    printf("\n\n Ingresa tu monto a depositar:  ");
    scanf("%d", &monto);


    banco = banco + monto; //acumulador
    numdepositos = numdepositos + 1; //contador de 1 en 1

    printf("\n\n Tu monto es: %d", banco);
    printf("\n\n Numero de depositos: %d", numdepositos);
    
    printf("\n\n ¿Deseas continuar depositando?");
    printf("\n S/N:   ");
    scanf("%c", &respuesta1);
    scanf("%c", &respuesta2);
    getchar();
    if (respuesta1 != 'S' && respuesta1 != 's')
    {
        continue;
    }
        else
    {
            
    }
        
        
        
        
        
        
        
        
    
} while (respuesta2 != 'N' && respuesta2 != 'n');
printf("\n\n Gracias por tu preferencia");
return 0;
    
    
    


    
    
}