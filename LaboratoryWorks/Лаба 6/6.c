#include <stdio.h>

int main(void){
    
    float a, x;
    
    printf("Введите а\n");
    scanf("%f", &a);
    
    x = a * a;  // вторая степень
    x = x * x;  // четвертая степень
    a = x * x  //восьмая степень
    
    printf("%f\n", a);
    
    return 0;
}

