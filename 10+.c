#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ejemplo1() {
    int arr[4] = {5, 10, 15, 20};
    int *p = arr;
    printf("Ejemplo 1: El segundo elemento del array es %d\n", *(p + 1));
}


void ejemplo2() {
    float pi = 3.14;
    float *p = &pi;
    *p = 3.14159;
    printf("Ejemplo 2: El valor de pi es %f\n", pi);
}


struct Estudiante {
    char nombre[30];
    int edad;
};
void ejemplo3() {
    struct Estudiante e1 = {"Juan", 22};
    struct Estudiante *p = &e1;
    printf("Ejemplo 3: Estudiante %s, edad %d\n", p->nombre, p->edad);
}
float promedio(float a, float b, float c) {
    return (a + b + c) / 3;
}


void ejemplo4() {
    float (*func)(float, float, float) = promedio;
    printf("Ejemplo 4: El promedio es %.2f\n", func(3.5, 4.5, 2.5));
}


void ejemplo5() {
    int x = 10;
    int *p = &x;
    int **pp = &p;
    printf("Ejemplo 5: x = %d, *p = %d, **pp = %d\n", x, *p, **pp);
}


struct Producto {
    char nombre[20];
    float precio;
};

void ejemplo6() {
    struct Producto *p = (struct Producto*)malloc(sizeof(struct Producto));
    if (p != NULL) {
        strcpy(p->nombre, "Laptop");
        p->precio = 1500.00;
        printf("Ejemplo 6: Producto: %s, Precio: %.2f\n", p->nombre, p->precio);
        free(p);
    }
}


void ejemplo7() {
    int mat[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int *p = (int*)mat;
    printf("Ejemplo 7: Elemento [1][2] = %d\n", *(p + 1 * 3 + 2));  // acceso al elemento [1][2]
}
void cambiarCadena(char *cadena) {
    strcpy(cadena, "Hola Mundo");
}


void ejemplo8() {
    char mensaje[20] = "Adios";
    cambiarCadena(mensaje);
    printf("Ejemplo 8: %s\n", mensaje);
}


void ejemplo9() {
    int *arr = (int*)malloc(sizeof(int) * 5);
    if (arr != NULL) {
        for (int i = 0; i < 5; i++) {
            arr[i] = i * 10;
        }
        printf("Ejemplo 9: Elementos del array: ");
        for (int i = 0; i < 5; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        free(arr);
    }
}


void ejemplo10() {
    char *nombres[3] = {"Pedro", "Maria", "Carlos"};
    char **p = nombres;
    printf("Ejemplo 10: Los nombres son: ");
    for (int i = 0; i < 3; i++) {
        printf("%s ", *(p + i));
    }
    printf("\n");
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

