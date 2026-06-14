#include <stdio.h>
#define n 5

typedef struct Empleado{
    char nom[30];
    char sex;
    float sal;
} E;

void salario(E a[]){
    int i, menor=0, Mayor=0;
    float qntym=a[0].sal, qntyM=a[0].sal;

    for(i=0; i<n; i++){
        if (a[i].sal >= qntyM){qntyM=a[i].sal; Mayor=i;}
    }

    for(i=0; i<n; i++){
        if (a[i].sal <= qntym){qntym=a[i].sal; menor=i;}
    }

    printf("\nEl mayor salario (%.2f) pertenece a %s, sexo: %c", a[Mayor].sal, a[Mayor].nom, a[Mayor].sex);
    printf("\nEl menor salario (%.2f) pertenece a %s, sexo: %c", a[menor].sal, a[menor].nom, a[menor].sex);
}

int main (){
    E a[n];

    printf ("Lista de Empleados\n");

    for (int i=0; i<n; i++){
        printf ("Empleado %d", i+1);
        printf("\nNombre: ");
        scanf("%s",a[i].nom);
        printf("Sexo (m/h): ");
        scanf(" %c", &a[i].sex);
        printf("Salario: ");
        scanf("%f", &a[i].sal);
    }

    //Mayor y menor salario función
    salario(a);
}