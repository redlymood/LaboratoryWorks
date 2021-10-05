#include <stdio.h>
#include <math.h>

int main(void){
    
    float x, y;
    
    printf("Введите х\n");
    scanf("%f", &x);
    
    printf("y = %f\n", 3 * pow(x, 6) - 6 * pow(x, 2) - 7);
    
    return 0;
}

