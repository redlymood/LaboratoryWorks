#include <stdio.h>

int main(void)
{
    float const pi = 3.14;
    float d;
    
    printf("Введите d\n");
    scanf("%f", &d);
    
    printf("L = %f", pi * d);
    
    return 0;
}
