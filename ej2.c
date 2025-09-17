#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ejemplo2() {
    int x = 10;
    int *p = &x;
    *p = 20;
    printf("Ejemplo 2: x = %d\n", x);
}
    int main() {
    ejemplo2();
}

