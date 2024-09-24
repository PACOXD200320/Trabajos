#include<stdio.h>
int main(){
    int Numero1, Numero2, Operacion, Resultado;
    char Seguir;
    do{
          
        printf("Ingrese el numero 1->\n");
        scanf("%d",&Numero1);
        printf("Ingrese numero 2->\n");
        scanf("%d",&Numero2);
        printf("\nSi desea sumar ingrese el numero 1\nSi desea restar ingrese el numero 2\nSi desea multiplicar ingrese el numero 3 \nSi desea dividir ingrese el numero 4\n");
        scanf("%d", &Operacion);
        switch (Operacion)
        {
        case 1:
            Resultado=Numero1+Numero2;
            break;
        case 2:
            Resultado=Numero1-Numero2;
            break;
        case 3:
            Resultado=Numero1*Numero2;
            break;
        case 4:
            if (Numero2 > 0){
                Resultado=Numero1/Numero2;
            }
            else
                printf("No se puede divir para 0");
            break;
        default:
            printf("La operacion esta erronea");
            break;
        }
        printf("\nEl resultado es %d", Resultado);
        printf("\nSi desea continua calculando escriba s");
       scanf(" %c", &Seguir);
    } while (Seguir != 'S' || Seguir != 's');
    return 0;
}
