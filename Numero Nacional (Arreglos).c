#include <stdio.h>
#define N 5

typedef struct {
    char nom[30];
    int cp;
    int edad;
} ind;

void Mor (ind a[]){
    for (int i=0; i<N; i++){
        if (a[i].cp>=58000 && a[i].cp<59000){
            printf("\n%s reside en morelia", a[i].nom);
        }
    }
}

int main (){
    ind a[N];
    int i=0;

    printf ("Lista de personas:\n");
    for (i=0; i<N; i++){
        printf ("Nombre: ");
        scanf("%s", a[i].nom);
        printf ("Codigo Postal: ");
        scanf ("%d", &a[i].cp);
        printf ("Edad: ");
        scanf ("%d", &a[i].edad);
    }

    printf("\n");
    Mor(a);
    return 0;
}

