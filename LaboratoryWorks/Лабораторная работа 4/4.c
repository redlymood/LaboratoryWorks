#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    float a, b;
    
    printf("Введите а\n");
    scanf("%f", &a);
    
    printf("Введите b\n");
    scanf("%f", &b);
    
    printf("%f\n", pow(a, 2) + pow(b, 2));
    printf("%f\n", pow(a, 2) - pow(b, 2));
    printf("%f\n", pow(a, 2) * pow(b, 2));
    printf("%f\n", pow(a, 2) / pow(b, 2));
    
    return 0;
}
