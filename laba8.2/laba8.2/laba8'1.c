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
    printf("������� |ln(x)| - (x - 2)^2 \n");
    printf("������� ��������� �������� x: ");
    scanf("%lf", &a);
    printf("������� �������� �������� x: ");
    scanf("%lf", &b);
    printf("���: ");
    scanf("%lf", &step);
    for (x = a; x <= b; x += step) {
        result = fabs(log10(x)) - pow((x + 2), 2);
        printf("| %.2lf | %.2lf |\n", x, result);
        printf("----------------\n");

    }
}
