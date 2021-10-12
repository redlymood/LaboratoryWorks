#include <stdio.h>

int main(void){
    
    float const pi = 3.14;
    float a;
    
    printf("Введите значение угла а в радианах\n");
    scanf("%f", &a);
    
    printf("Значение угла в градусах: %f", (a * 180) / pi);
    
    return 0;

}
