#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){

    int x1, x2, x3;
    float AC, BC;

    printf("Введите координаты точки А\n");
    scanf("%d", &x1);
    
    printf("Введите координаты точки B\n");
    scanf("%d", &x2);
    
    printf("Введите координаты точки C (между A и B)\n");
    scanf("%d", &x3);
    
    AC = x3 - x1;
    BC = x2 - x3;
    
    printf("Произведение: %f\n", AC * BC);
    
    return 0;
}
