#include <stdio.h>
#include <math.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)
int main() {
    setlocale(LC_ALL, "RUS");
    int n;
    double x, sum = 0;
    // Запрашиваем у пользователя ввод значения n и x
    printf("Введите натуральное число n: ");
    scanf("%d", &n);
    printf("Введите действительное число x: ");
    scanf("%lf", &x);

    // Вычисляем сумму
    for (int i = 1; i <= n; i++) {
        sum += sin(pow(x, i)); // sin(x^i)
    }

    // Выводим результат
    printf("Сумма sin(x) + sin(x^2) + ... + sin(x^%d) = %lf\n", n, sum);

    return 0;
}


