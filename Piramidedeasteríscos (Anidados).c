#include <stdio.h>

void piramide(){
    int n, total_colum=0, ast=0, esp=0;
    printf("\nPiramide de asteriscos");

    printf("\nNum de escalones:");
    scanf("%d",&n);

    printf("\n\nPiramide de %d escalones\n\n", n);

    total_colum=((n-1)*2)+1;
    for (int i=0; i<n; i++){
        ast=(i*2)+1;
        esp=(total_colum-ast)/2;
        for(int x=0; x<esp; x++){printf(" ");}
        for(int y=0; y<ast; y++){printf("*");}
        for(int x=0; x<esp; x++){printf(" ");}
        printf("\n");
    }
}

void triangulo(){
    int n;
    printf("\nTriangulo de asteriscos");
    printf("Num de escalones: ");
    scanf("%d",&n);
    for (int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            printf("*");
        }
        printf("\n");
    }
}

int main(){
    int op=0;
    printf("==================\nImpresor de Formas\n==================\n");
    printf("Selecciona una forma:\n1. Piramide\n2. Triangulo\n"); 
    scanf("%d",&op);
    switch (op){
        case 1:
            piramide();
            break;
        case 2:
            triangulo();
            break;
        default:
            printf("Opcion no valida");
    }
}

