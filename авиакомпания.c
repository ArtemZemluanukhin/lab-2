#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");

	printf("На борту %d пассажиров\n", 120);
	printf("билет второго класса стоит %d\n", 20);
	printf("Общая сумма, которую получила авиакомпания-%.0f\n",120*0.75*20+120*0.25*20);
	system("pause");

}