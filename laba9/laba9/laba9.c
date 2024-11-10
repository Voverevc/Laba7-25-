#include <stdio.h>
#include <locale.h>
#include<math.h>
#pragma warning(disable:4996)
int main()
{
    // Задание 1
    setlocale(LC_ALL, "RUS");
    for (int i = 0; i <= 5; i++) {
        for (int j = i; j >= 0; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
}