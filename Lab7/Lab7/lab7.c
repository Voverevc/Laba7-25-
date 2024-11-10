#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)

//2задание 


int main() {
	setlocale(LC_ALL, "RUS");
	char c ;     
	printf("Введите символ: ");
	scanf(" %c", &c);
	switch (c)
	{
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'W':
	case 'Q':
	case 'R':
	case 'Y':
	case 'S':
	case 'L':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'w':
	case 'q':
	case 'r':
	case 'y':
	case 's':
	case 'l':
		printf("Это буква.\n");
		break;
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case '10':
	case '11':
		printf("Это цифра.\n");
			break;
	default:
		printf("Неизвестный символ.\n");
	
	}
}
