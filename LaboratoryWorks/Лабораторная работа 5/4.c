#include <stdio.h>
#include <stdlib.h>

int main(void){

    int x1, x2, y1, y2;

    printf("Введите координаты первой вершины\n");
    scanf("%d", &x1);
    scanf("%d", &y1);
    
    printf("Введите координаты второй вершины\n");
    scanf("%d", &x2);
    scanf("%d", &y2);
    
    printf("%d\n", abs(y1 - y2) * abs(x1 - x2));
    
    return 0;
}
