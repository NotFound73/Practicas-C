#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 10

typedef struct {
    char nom[30];
    char mat[10];
    int cal;
} al;

void QMat(al a[N]){
    int i, j, menor=0;
    float qnty=10.0, prom=0.0;

    int used[N]={0};
    int cont=0;
    float sum=0;

    for(i=0; i<N; i++){
        if (used[i]==0){
            cont=0;
            sum=0;

            for (j = 0; j < N; j++) {
                if (strcmp(a[i].mat, a[j].mat) == 0) {
                    sum += a[j].cal;
                    cont ++;
                    used[j] = 1;
                }
            }
            prom = sum/cont;
            printf("\nMateria: %s", a[i].mat);
            printf("\nPromedio: %.2f", prom);

            if (prom<=qnty){
                menor=i; qnty=prom;
            }
        }
    }
    printf("\nEl menor promedio fue en %s con %.2f", a[menor].mat, qnty);
}

void Rep(al a[N]){
    int sum=0, menor=0;
    float prom=0.0, qnty=10.0;

    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            if (strcmp(a[i].nom, a[j].nom)==0){
                sum=a[i].cal+a[j].cal;
                prom=sum/2.0;
                
                if (prom<=qnty){
                    menor=i; qnty=prom;
                }
            }
        }
    }
    printf("\nEl menor promedio es de %s con %.2f", a[menor].nom, qnty);
}

int main() {
    al a[N];

    for (int i=0; i<N; i=i+2){
        printf ("Nombre: ");
        scanf ("%s", a[i].nom);
        strcpy(a[i+1].nom, a[i].nom);
        for (int d=0; d<2; d++){
            printf ("Materia: ");
            scanf ("%s", a[i+d].mat);
            printf("Calificacion: ");
            scanf("%d", &a[i+d].cal);
        }
    }

    QMat(a);
    Rep(a);

    return 0;
}