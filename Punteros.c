#include <stdio.h>

void intercambio (int *a, int *b){
    int temp=0;

    temp=*a;
    *a=*b;
    *b=temp;
}

int main (){
    int n1=0, n2=0;

    printf("Primer número: "); scanf("%d", &n1);
    printf("Segundo número: "); scanf("%d", &n2);

    printf("\na=%d\n", n1);
    printf("b=%d\n", n2);

    intercambio(&n1, &n2);
    printf("\nDespúes del intercambio\n");
    printf("a=%d\n", n1);
    printf("b=%d\n", n2);

    return 0;
}