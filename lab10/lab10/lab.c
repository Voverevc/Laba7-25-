#include <stdio.h>
#include <locale.h>
#include <math.h>
#pragma warning(disable:4996)
#define M_PI 3.14159
// ������� 3
float area_round(float r)
{
	return M_PI * r * r;
}

void draw_round(float radius, char symbol)
{
	int r = (int)radius;
	for (int i = -r; i <= r; i++)
	{
		for (int j = -r; j <= r; j++)
		{
			if (i * i + j * j <= r * r)
			{
				printf("%c", symbol);
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}

void name() {
	printf("**������: ����**\n");
}

// ������� 2
double factorial(int n)
{
	if (n == 0) return 1;
	double f = 1.0;
	for (int i = 1; i <= n; i++) {
		f *= i;
	}
	return f;
}
double sin_n(double x, int N)
{
	double sum = 0.0;
	for (int k = 0; k < N; k++) {
		double term = (pow(-1, (k - 1)) * pow(x, 2 * k + 1)) / factorial(2 * k + 1);
		sum += term;
	}
	return sum;
}

double sin_eps(double x, double eps)
{
	double sum = 0.0, term;
	int k = 0;
	do {
		term = (pow(-1, k - 1) * pow(x, 2 * k + 1)) / factorial(2 * k + 1);
		sum += term;
		k++;
	} while (fabs(term) > eps);
	return sum;
}

// ������� 1 
double fa(double x)
{
	double y1;
	if (x <= 3)
		y1 = pow(x, 2) - 3 * x + 9;
	else
		y1 = 1 / (pow(x, 3) + 3);
	return y1;
}
double fa2(double x, double e)
{
	double y2;
	y2 = x * (pow(e, pow(sin(x), 2)));
	return y2;
}

double main(void)
{
	// ������� 1 
	double r, k, x, e;
	setlocale(LC_ALL, "RUS");
	printf("������� �:");
	scanf("%lf", &x);
	printf("������� e:");
	scanf("%lf", &e);
	r = fa((double)x);
	k = fa2((double)x, (double)e);
	printf("y1 = %lf \ny2 = %lf\n", r, k);
	printf("������������ = %lf\n�������� ��������� = %lf\n��������� ����� = %lf\n", r * k, pow(r, 2) - pow(k, 2), pow((r + k), 2));
	// ������� 2

	double result_lib = sin(x);
	double result_n = sin_n(x, 10);
	double result_eps = sin_eps(x, 0.0001);

	printf("����������� ����������: %f\n", result_lib);
	printf("��� � �������� ���������: %f\n", result_eps);
	printf("��� � N = 10: %f\n", result_n);

	// ������� 3
	int choice;
	float radius;
	char symbol;
	setlocale(LC_ALL, "RUS");
	printf("������� ������: ");
	scanf("%f", &radius);
	printf("��������, ��� ������ ������:\n1 - �������\n2 - �������\n3 - �����������(�������)\n");
	scanf("%d", &choice);
	switch (choice) {
	case 1:
		printf("�������: %.2f\n", area_round(radius));
		break;
	case 2:
		printf("���������� ������ (������� ������): ");
		scanf(" %c", &symbol);
		draw_round(radius, symbol);
		break;
	case 3:
		name();
		printf("����������� �����: (x - a)^2 + (y - b)^2 = r^2\n");
		break;
	}
}