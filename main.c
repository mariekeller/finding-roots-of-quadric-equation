﻿#include <stdio.h>
#include <math.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Russian");
	printf("Введите коэффициенты a, b, c:\n");
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	float d;
	d = b * b - 4 * a * c;
	float x1, x2;
	if (!a)
	{
		printf("\nКоэффициент a не должен быть равен 0\n");
		return 0;
	}
	if (d > 0)
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		printf("\nx1 = %.3f, x2 = %.3f\n",x1, x2);
		return 1;
	}
	if (d == 0)
	{
		x1 = x2 = -b / (2 * a);
		printf("x1 = x2 = %.3f\n", x1);
		return 1;
	}
	else
	{
		printf("\nОтрицательный дискриминант\n");
		return 0;
	}
}