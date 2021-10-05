#include <stdio.h>
#include <math.h>

int main(void){
    
    float x, y;
    
    printf("Введите х\n");
    scanf("%f", &x);
    
    printf("y = %f\n", 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2);
    
    return 0;
}

