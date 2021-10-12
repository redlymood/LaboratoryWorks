#include <stdio.h>

int main(void){
    
    float const pi = 3.14;
    float a;
    
    printf("Введите значение угла а в градусах\n");
    scanf("%f", &a);
    
    printf("Значение а в радинах: %f", (pi * a) / 180);
    
    return 0;
}
