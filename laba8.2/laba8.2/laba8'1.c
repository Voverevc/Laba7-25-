#include <stdio.h>
#include <locale.h>
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)
double main(void)
{
    double a, b, result, x;
    double step;
    setlocale(LC_ALL, "RUS");
    printf("‘ункци€ |ln(x)| - (x - 2)^2 \n");
    printf("¬ведите начальное значение x: ");
    scanf("%lf", &a);
    printf("¬ведите конечное значение x: ");
    scanf("%lf", &b);
    printf("шаг: ");
    scanf("%lf", &step);
    for (x = a; x <= b; x += step) {
        result = fabs(log10(x)) - pow((x + 2), 2);
        printf("| %.2lf | %.2lf |\n", x, result);
        printf("----------------\n");

    }
}
