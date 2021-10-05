#include <stdio.h>

int main(void){
    
    int a, b, dop = 0;
    
    printf("Введите а\n");
    scanf("%d", &a);
    
    printf("Введите b\n");
    scanf("%d", &b);
    
    dop = a;
    a = b;
    b = dop;
    
    printf("a = %d, b = %d\n", a, b);
    
    return 0;

}

