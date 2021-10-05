#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){
    int x1, x2, y1, y2;
    
    printf("Введите x1\n");
    scanf("%d", &x1);
    
    printf("Введите y1\n");
    scanf("%d", &y1);
    
    printf("Введите x2\n");
    scanf("%d", &x2);
    
    printf("Введите y2\n");
    scanf("%d", &y2);
    
    printf("Расстояние между точками: %f\n", pow(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2), 0.5));
    
    return 0;
}
