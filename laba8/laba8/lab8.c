#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)
double main(void)
{
    int m, n, i, S = 0, k = 0;
    setlocale(LC_ALL, "RUS");
    printf("Введите начальное значение m: ");
    scanf("%d", &m);
    printf("Введите конечное значение n: ");
    scanf("%d", &n);
    for (i = m; i >= n; i--) {
        S += i;
        k += 1;
    }
    printf("Выполнено %d раз\n", k);
    printf("Сумма чисел от %d до %d равна: %d\n", m, n, S);
}

    