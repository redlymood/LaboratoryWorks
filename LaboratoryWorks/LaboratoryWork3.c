#include <stdio.h>

int main(int argc, const char * argv[]) {
    float a, b;
    printf("Введите а\n");
    scanf("%f", &a);
    printf("Введите b\n");
    scanf("%f", &b);
    printf("%f\n", (a + b) / 2);
    return 0;
}
