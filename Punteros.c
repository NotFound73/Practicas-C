#include <stdio.h>

void intercambio (int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void Mayor(int *a, int *b, int *resultado){
    if (*a>*b){*resultado=*a;}
    if (*b>*a){*resultado=*b;}
}

int main (){
    int n1=0, n2=0, mayor=0, op;

    printf("Primer número: "); scanf("%d", &n1);
    printf("Segundo número: "); scanf("%d", &n2);

    printf("\na=%d\n", n1);
    printf("b=%d\n", n2);

    printf("\nForma de organización\n1)Intercambio\n2)Mayor\nSeleccionar: ");
    scanf("%d",&op);

    if (op==1){
        intercambio(&n1, &n2);
        printf("\nDespúes del intercambio\n");
        printf("a=%d\n", n1);
        printf("b=%d\n", n2);
    }

    else if (op==2){
        Mayor(&n1, &n2, &mayor);
        if (n1==n2){
            printf("\nAmbos números son iguales");}
        else {printf("\nEl mayor es: %d", mayor);}
    }

    else {printf("Opción invalida");}

    return 0;
}