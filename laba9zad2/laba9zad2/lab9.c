#include <stdio.h>
#include <locale.h>
#include<math.h>
#pragma warning(disable:4996)
int main(){
    setlocale(LC_ALL, "RUS");
while (1)
{
    long long int num, l, b, n, k;
    printf("������� �����: ");
    scanf("%lld", &num);
    k = num / 1000 % 100 % 10;
    l = num / 100 % 10;
    b = num / 10 % 10;
    n = num % 10;
    if (l == b)
    {
        printf("%lld ��������� ����� � %lld\n", l, b);
    }
    if (n == b)
    {
        printf("%lld ��������� ����� � %lld\n", b, n);
    }
    if (l == k)
    {
        printf("%lld ��������� ����� � %lld\n", l, k);
    }

    else
    {
        printf("��� ���������� ������\n");
    }

    printf("����������? (�� - y, ��� - n): ");
    char a;
    while ((a = getchar()) != '\n');
    a = getchar();
    if (a == 'n' || a == 'N') break;
}


}