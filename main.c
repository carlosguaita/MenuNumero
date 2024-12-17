#include <stdio.h>

int main (int argc, char *argv[]) {

    int d, n=0, s=0, par=0, impar=0, opc=0, opc2=0;

    do
    {
        printf("Seleccione una opcion:\n");
        printf("1. Ingresar Numero\n");
        printf("2. Suma Digitos\n");
        printf("3. Cantidad Pares/Impares\n");
        printf("4. Invertir Numero\n");
        printf(">> ");
        scanf("%d", &opc);
        switch (opc)
        {
        case 1:
            do
            {
                printf("Ingrese un numero de 4 digitos: ");
                scanf("%d", &n);
                if (n < 1000 || n > 9999)
                {
                    printf("Error: El numero debe ser de 4 cifras\n");
                }
            } while (n < 1000 || n > 9999);
            break;
        case 2:
            if (n != 0)
            {
                while (n != 0)
                {
                    d = n % 10;
                    n = n / 10;
                    s += d;
                }
                printf("La suma de los digitos es: %d\n", s);
            }
            else
            {
                printf("Error: Primero debe ingresar el numero\n");
            }
            break;
        case 4:
            if (n != 0)
            {
                printf("El numero invertido es: ");
                while (n != 0)
                {
                    d = n % 10;
                    n = n / 10;
                    printf("%d",d);
                }
                printf("\n");
            }
            else
            {
                printf("Error: Primero debe ingresar el numero\n");
            }
            break;
        case 3:
            if (n != 0)
            {
                while (n != 0)
                {
                    d = n % 10;
                    n = n / 10;
                    impar+=d%2;
                }
                par=4-impar;
                printf("La cantidad de pares es: %d\n", par);
                printf("La cantidad de impares es: %d\n", impar);
            }
            else
            {
                printf("Error: Primero debe ingresar el numero\n");
            }
            break;

        default:
            break;
        }
        printf("Desea otra opcion: 1.Si/2.No:\n");
        printf(">> ");
        scanf("%d",&opc2);
    } while (opc2==1);

    return 0;
}