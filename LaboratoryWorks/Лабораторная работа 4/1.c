#include <stdio.h>

int main(void)
{
    float a, b;
    
    scanf("%f", &a);
    scanf("%f", &b);
    
    printf("Площадь: %f Периметр: %f", a * b, 2 * (a + b));
    
    return 0;
}
