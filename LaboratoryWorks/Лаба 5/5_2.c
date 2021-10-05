#include <stdio.h>
#include <stdlib.h>

int main(void){

    int x1, x2, x3;
    float AC, BC;

    printf("Введите координаты точки А\n");
    scanf("%d", &x1);
    
    printf("Введите координаты точки B\n");
    scanf("%d", &x2);
    
    printf("Введите координаты точки C\n");
    scanf("%d", &x3);
    
    AC = abs(x1 - x2);
    BC = abs(x2 - x3);
    
    printf("Отрезок AC: %f\n", AC);
    printf("Отрезок BC: %f\n", BC);
    printf("Сумма: %f\n", AC + BC);
    
    return 0;
}
