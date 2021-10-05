#include <stdio.h>

int main(void){
    
    int a, b, c, dop1 = 0, dop2 = 0;
    
    printf("Введите а\n");
    scanf("%d", &a);
    
    printf("Введите b\n");
    scanf("%d", &b);
    
    printf("Введите c\n");
    scanf("%d", &c);
    
    dop1 = a;
    dop2 = c;
    a = b;
    c = dop1;
    b = dop2;
    
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    
    return 0;
}

