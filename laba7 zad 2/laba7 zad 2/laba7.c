#include<stdio.h>
#include<locale.h>
#include<math.h>
#pragma warning(disable:4996)

void main() {
	setlocale(LC_ALL, "RUS");
	char c;
	float x, y, otvet;
	printf("�������� ������:");
	scanf("%f%c%f", &x, &c, &y);
	switch (c){
	case '*': 
		printf("��������� =%f\n", x + y);
		break;
	case '/':
		printf("�������� =%f\n", x / y);
		break;
	case '+':
		printf("�������� =%f\n", x + y);
		break;
	case'-': 
		printf("��������� =%f\n", x - y);
		break;
	case'^':
		printf("��������� =%f\n", pow(x,y));
		break;
	default:
		printf("Error");
	}
	return 0;
}