#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");

	printf("�� ����� %d ����������\n", 120);
	printf("����� ������� ������ ����� %d\n", 20);
	printf("����� �����, ������� �������� ������������-%.0f\n",120*0.75*20+120*0.25*20);
	system("pause");

}