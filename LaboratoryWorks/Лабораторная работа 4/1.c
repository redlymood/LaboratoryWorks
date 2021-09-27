#include <stdio.h>

int main(int argc, const char * argv[]) {
    float a, b;
    
    printf("Введите сторону а\n");
    scanf("%f", &a);
    
    printf("Введите сторону b\n");
    scanf("%f", &b);
    
    printf("Площадь:");
    printf("%f\n", a * b);
    printf("Периметр:");
    printf("%f\n", 2 * a + 2 * b);
    
    return 0;
}
    
    
    
