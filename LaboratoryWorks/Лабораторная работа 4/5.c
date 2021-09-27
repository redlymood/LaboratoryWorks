#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int a, b;
    
    printf("Введите а\n");
    scanf("%d", &a);
    
    printf("Введите b\n");
    scanf("%d", &b);
    
    printf("%d\n", abs(a) + abs(b));
    printf("%d\n", abs(a) - abs(b));
    printf("%d\n", abs(a) * abs(b));
    printf("%d\n", abs(a) / abs(b));
    
    return 0;
}
