#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    float a, b;
    
    scanf("%f", &a);
    scanf("%f", &b);
    
    a = abs(a);
    b = abs(b);
    
    printf("Сумма: %f Разность: %f Произведение: %f Частное: %f", a + b, a - b, a * b, a / b);
    
    return 0;
}
