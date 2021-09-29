#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){

    int x1, x2, x3, y1, y2, y3;
    float AC, BC;

    printf("Введите координаты точки А\n");
    scanf("%d", &x1);
    scanf("%d", &y1);
    
    printf("Введите координаты точки B\n");
    scanf("%d", &x2);
    scanf("%d", &y2);
    
    printf("Введите координаты точки C\n");
    scanf("%d", &x3);
    scanf("%d", &y3);
    
    AC = pow(pow(abs(x1 - x3), 2) + pow(abs(y1 - y3), 2), 0.5);
    BC = pow(pow(abs(x2 - x3), 2) + pow(abs(y2 - y3), 2), 0.5);
    
    printf("Произведение: %f\n", AC * BC);
    
    return 0;
}
