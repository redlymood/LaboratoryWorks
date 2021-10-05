#include <stdio.h>

int main(void)
{
    float a, b;
    
    printf("Ведеите a\n");
    scanf("%f", &a);
    
    printf("Ведеите b\n");
    scanf("%f", &b);
    
    printf("Среднее арифметическое: %f", (a + b) / 2);
    
    return 0;
}
