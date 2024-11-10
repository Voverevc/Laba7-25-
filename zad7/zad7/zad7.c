#include <stdio.h>
#include<locale.h>
#include<math.h>
#pragma warning(disable:4996)
int main() {
    int year, day_of_week;
    setlocale(LC_ALL, "RUS");
    printf("¬ведите год XXI века (от 2001 до 2100): ");
    scanf("%d", &year);
    if (year < 2001 || year > 2100) {
        printf("Ќеверный год. ѕожалуйста, введите год от 2001 до 2100.\n");
        return 1;
    }
    int k = 1; 
    int m = 9;
    int q = (k + (13 * (m + 1)) / 5 + year + (year / 4) + (6 * (year / 100)) + (year / 400)) % 7;
    day_of_week = (q + 5) % 7;
    switch (day_of_week) {
    case 0:
        printf("1 сент€бр€ %d года - суббота\n", year);
        break;
    case 1:
        printf("1 сент€бр€ %d года - воскресенье\n", year);
        break;
    case 2:
        printf("1 сент€бр€ %d года - понедельник\n", year);
        break;
    case 3:
        printf("1 сент€бр€ %d года - вторник\n", year);
        break;
    case 4:
        printf("1 сент€бр€ %d года - среда\n", year);
        break;
    case 5:
        printf("1 сент€бр€ %d года - четверг\n", year);
        break;
    case 6:
        printf("1 сент€бр€ %d года - п€тница\n", year);
        break;
    }

    return 0;
}
