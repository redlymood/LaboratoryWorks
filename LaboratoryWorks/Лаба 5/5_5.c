#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    
    int x1, x2, x3, y1, y2, y3;
    float AC, BC, AB, p, s;
    
    printf("Введите координа вершины А(х1; y1)\n");
    scanf("%d", &x1);
    scanf("%d", &y1);
    
    printf("Введите координа вершины B(х2; y2)\n");
    scanf("%d", &x2);
    scanf("%d", &y2);
    
    printf("Введите координа вершины C(х3; y3)\n");
    scanf("%d", &x3);
    scanf("%d", &y3);
    
    AB = pow(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2), 0.5);
    BC = pow(pow(abs(x3 - x2), 2) + pow(abs(y3 - y2), 2), 0.5);
    AC = pow(pow(abs(x1 - x3), 2) + pow(abs(y1 - y3), 2), 0.5);
    p = (AB + BC + AC) / 2;
    s = pow((p * (p - AB) * (p - BC) * (p - AC)), 0.5);
    
    printf("Периметр: %f\n", 2 * p);
    printf("Площадь: %f\n", s);
    
    return 0;
}
