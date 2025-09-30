#include <stdio.h>
#include <locale.h>
int main()
{
	int P2,S1;
	float res;
	setlocale(LC_CTYPE, "RUS");
	puts("Введите количество пассажиров\n");
	scanf("%d",&P2);
	printf("На борту %d пассажиров\n", P2);
	puts("Введите стоимость билета 2 класса\n");
	scanf("%d", &S1);
	res = P2 * 0.75 * S1 + P2 * 0.25 * S1;
	printf("Общая сумма, которую получила авиакомпания-%.2f\n", res);
	system("pause");

}