#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    float c, a, b;
    
    printf("Введеите a\n");
    scanf("%f", &a);
    
    printf("Ведеите a\n");
    scanf("%f", &b);
    
    a = abs(a);
    b = abs(b);
    c = a / b;
    
    printf("Сумма: %f Разность: %f Произведение: %f Частное: %f", a + b, a - b, a * b, c);
    
    return 0;
}
