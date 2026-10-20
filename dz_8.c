#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include <math.h>

int dz();

int main()
{
	setlocale(LC_ALL, "RUS");

	dz();

	return 0;
}

int dz()
{
	double x, result = 0;
	int n;

	printf("Введите x: ");
	scanf("%lf", &x);

	printf("\nВведите n: ");
	scanf(" %d", &n);

	for (int i = 1; i <= n; i++)
	{
		result += pow(sin(x), i);
	}
	printf("Результат: %.4lf", result);

	return 0;
}