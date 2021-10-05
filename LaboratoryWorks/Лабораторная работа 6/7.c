#include <stdio.h>

int main(void){
    
    float a, x, y;
    
    printf("Введите а\n");
    scanf("%f", &a);
    
    x = a * a;  // вторая степень
    y = a * x;  // третья степень
    x = x * y;  // пятая степень
    y = x * x;  //десятая степень
    x = y * x; //пятнадцатая степень
    
    printf("%f\n", x);
    
    return 0;
}

