#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ejemplo1() {
    int x = 5;
    int *p = &x;
    printf("Ejemplo 1: x = %d, *p = %d\n", x, *p);
}
void ejemplo2() {
    int x = 10;
    int *p = &x;
    *p = 20;
    printf("Ejemplo 2: x = %d\n", x);
}
void ejemplo3() {
    int arr[3] = {1, 2, 3};
    int *p = arr;
    printf("Ejemplo 3: Primer elemento = %d\n", *p);
}
void ejemplo4() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;
    printf("Ejemplo 4: Array: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
}
struct Persona {
    char nombre[20];
    int edad;
};
void ejemplo5() {
    struct Persona p1 = {"Ana", 30};
    struct Persona *ptr = &p1;
    printf("Ejemplo 5: %s tiene %d años\n", ptr->nombre, ptr->edad);
}
void ejemplo6() {
    int x = 7;
    int *p = &x;
    int **pp = &p;
    printf("Ejemplo 6: x = %d, *p = %d, **pp = %d\n", x, *p, **pp);
}
void incrementar(int *n) {
    (*n)++;
}
void ejemplo7() {
    int x = 10;
    incrementar(&x);
    printf("Ejemplo 7: x incrementado = %d\n", x);
}
void ejemplo8() {
    int *p = (int*)malloc(sizeof(int) * 3);
    if (p != NULL) {
        p[0] = 100; p[1] = 200; p[2] = 300;
        printf("Ejemplo 8: %d %d %d\n", p[0], p[1], p[2]);
        free(p);
    }
}
void ejemplo9() {
    char *nombres[3] = {"Ana", "Luis", "Marta"};
    printf("Ejemplo 9: ");
    for(int i = 0; i < 3; i++) {
        printf("%s ", nombres[i]);
    }
    printf("\n");
}
int suma(int a, int b) { return a + b; }
int resta(int a, int b) { return a - b; }
void ejemplo10() {
    int (*operacion)(int, int);
    operacion = suma;
    printf("Ejemplo 10: Suma = %d\n", operacion(2, 3));
    operacion = resta;
    printf("Ejemplo 10: Resta = %d\n", operacion(5, 2));
}
    int main() {
    ejemplo1();
    ejemplo2();
    ejemplo3();
    ejemplo4();
    ejemplo5();
    ejemplo6();
    ejemplo7();
    ejemplo8();
    ejemplo9();
    ejemplo10();
    return 0;
}


