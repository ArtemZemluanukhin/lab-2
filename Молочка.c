#include <stdio.h>
#include <locale.h>

int main() {
    
    const int DAILY_VOLUME = 4;     
    const int DAYS_IN_MARCH = 31;
    const int DAYS_IN_APRIL = 30;
    float x = 50.0;  
    float a = 5.0;  
    setlocale(LC_CTYPE, "");
    float price_march = x;
    float total_march = DAILY_VOLUME * DAYS_IN_MARCH * price_march;
    float price_april = x + (x + a);
    float total_april = DAILY_VOLUME * DAYS_IN_APRIL * price_april;
    float total_to_pay = total_march + total_april;
    printf("������ ��������� �������� ������\n");
    printf("---------------------------------\n\n");
    printf("�������:\n");
    printf("- ���������� ����� ��������: %d �����.\n", DAILY_VOLUME);
    printf("- ���� �� ���� � �����: %.2f ���.\n", price_march);
    printf("- �������� 'a' ��� ������� ��������� ����: %.2f ���.\n", a);
    printf("- � 1 ������ ���� �� ���� ������������� �� (x + a) = %.2f + %.2f = %.2f ���.\n", x, a, (x + a));
    printf("- ����� ���� � 1 ������: %.2f ���. �� ����.\n\n", price_april);
    printf("������:\n");
    printf("- ��������� �������� � �����: %d ��. * %d �/��. * %.2f ���./� = %.2f ���.\n", DAYS_IN_MARCH, DAILY_VOLUME, price_march, total_march);
    printf("- ��������� �������� � ������: %d ��. * %d �/��. * %.2f ���./� = %.2f ���.\n", DAYS_IN_APRIL, DAILY_VOLUME, price_april, total_april);
    printf("--------------------------------\n");
    printf("����� ����� � ������ �� ���� � ������: %.2f ���.\n", total_to_pay);

    return 0;
}