#include <stdio.h>

int main(void){
    
    float v1, v2, s, t, v;
    
    printf("Введите скорость первого автомобиля\n");
    scanf("%f", &v1);
    
    printf("Введите скорость второго автомобиля\n");
    scanf("%f", &v2);
    
    printf("Введите расстояние между автомобилями\n");
    scanf("%f", &s);
    
    printf("Введите время\n");
    scanf("%f", &t);
    
    v = v1 + v2;
    
    printf("Расстояние между автомобилями: %f", t * v + s);
    
    return 0;
    
}
