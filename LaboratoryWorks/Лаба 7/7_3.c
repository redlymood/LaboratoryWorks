#include <stdio.h>

int main(void){
    
    float x, y, a, s;
    
    printf("Введите x\n");
    scanf("%f", &x);
    
    printf("Введите a\n");
    scanf("%f", &a);
    
    printf("Введите y\n");
    scanf("%f", &y);
    
    s = a / x;
    
    printf("Килограмм конфет стоит: %f\n", s);
    printf("%f", y);
    printf(" килограмм конфет стоит: %f\n", s * y);
    
    return 0;

}
