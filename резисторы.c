#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	int R1, R2;
	float posled, parall;

	puts("¬едите значение резистора 1");
	scanf("%d", &R1);
	puts("¬ведите значение резистора 2");
	scanf("%d", &R2);
	posled=R1+R2;
	parall = (float)1/R1 + (float)1/R2;
	printf("ќбщее сопротивление при последовательном соединении==%.3f\n", posled);
	printf("ќбще сопротивление при параллельном соединении==%.3f\n", parall);
	system("pause");
}