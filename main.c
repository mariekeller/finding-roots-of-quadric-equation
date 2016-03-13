#include <stdio.h>
#include <math.h>
#include <locale.h>

void main ()
{
	setlocale(LC_ALL, "Russian");
	printf("Ââåäèòå êîýôôèöèåíòû a, b, c:\n");
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	float d;
	d = b * b - 4 * a * c;
	float x1, x2;
	if (!a)
		printf("\nÊîýôôèöèåíò a íå äîëæåí áûòü ðàâåí 0\n");
	else
		if (d > 0)
		{
			x1 = (-b + sqrt(d)) / (2 * a);
			x2 = (-b - sqrt(d)) / (2 * a);
			printf("\nx1 = %.3f, x2 = %.3f\n",x1, x2);
		}
		else
			if (d == 0)
			{
				x1 = x2 = -b / (2 * a);
				printf("x1 = x2 = %.3f\n", x1);
			}
			else
				printf("\nÎòðèöàòåëüíûé äèñêðèìèíàíò\n");
}