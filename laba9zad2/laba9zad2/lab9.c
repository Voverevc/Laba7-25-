#include <stdio.h>
#include <locale.h>
#include<math.h>
#pragma warning(disable:4996)
int main(){
    setlocale(LC_ALL, "RUS");
while (1)
{
    long long int num, l, b, n, k;
    printf("Введите число: ");
    scanf("%lld", &num);
    k = num / 1000 % 100 % 10;
    l = num / 100 % 10;
    b = num / 10 % 10;
    n = num % 10;
    if (l == b)
    {
        printf("%lld находится рядом с %lld\n", l, b);
    }
    if (n == b)
    {
        printf("%lld находится рядом с %lld\n", b, n);
    }
    if (l == k)
    {
        printf("%lld находится рядом с %lld\n", l, k);
    }

    else
    {
        printf("Нет одинаковых больше\n");
    }

    printf("Продолжить? (Да - y, нет - n): ");
    char a;
    while ((a = getchar()) != '\n');
    a = getchar();
    if (a == 'n' || a == 'N') break;
}


}