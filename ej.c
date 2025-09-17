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
    int main() {
    ejemplo1();
    ejemplo2();
    ejemplo3();
    ejemplo4();
    ejemplo5();
    return 0;
}
 

