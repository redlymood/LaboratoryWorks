#include <stdio.h>

int main(int argc, const char * argv[]) {
    float a, b;
    printf("Введите а\n");
    scanf("%f", &a); //ввод с клавиатуры числа а
    printf("Введите b\n");
    scanf("%f", &b); //ввод с клавиатуры числа b
    printf("%f\n", (a + b) / 2); //подсчет результата и вывод его на экран
    return 0;
}
