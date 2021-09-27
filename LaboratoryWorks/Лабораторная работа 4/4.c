#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b;
    
    scanf("%f", &a);
    scanf("%f", &b);
    
    a = pow(a, 2);
    b = pow(b, 2);
    
    printf("Сумма: %f Разность: %f Произведение: %f Частное: %f", a + b, a - b, a * b, a / b);
    
    return 0;
}
