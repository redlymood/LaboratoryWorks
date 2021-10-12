#include <stdio.h>

int main(void){
    
    float a1, b1, c1, a2, b2, c2, x, y;
    
    printf("Введите a1\n");
    scanf("%f", &a1);
    
    printf("Введите a2\n");
    scanf("%f", &a2);
    
    printf("Введите b1\n");
    scanf("%f", &b1);
    
    printf("Введите b2\n");
    scanf("%f", &b2);
    
    printf("Введите c1\n");
    scanf("%f", &c2);
    
    printf("Введите c2\n");
    scanf("%f", &c2);
    
    x = (c1 * b2 - b1 * c2) / (a1 * b2 - a2 * b1);
    y = (a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1);
    
    printf("x = %f, y = %f", x, y);
    
    return 0;
    
}
