#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	int R1, R2;
	float posled, parall;

	puts("������ �������� ��������� 1");
	scanf("%d", &R1);
	puts("������� �������� ��������� 2");
	scanf("%d", &R2);
	posled=R1+R2;
	parall = (float)1/R1 + (float)1/R2;
	printf("����� ������������� ��� ���������������� ����������==%.3f\n", posled);
	printf("���� ������������� ��� ������������ ����������==%.3f\n", parall);
	system("pause");
}