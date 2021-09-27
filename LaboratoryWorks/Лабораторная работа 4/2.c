#include <stdio.h>
int main(int argc, const char * argv[]) {
    
    float const pi = 3.14;
    float d;
    
    printf("Введите диаметр окружности:\n");
    scanf("%f", &d);
    
    printf("Длина окружности:");
    printf("%f\n", pi * d);
    
    return 0;
}
