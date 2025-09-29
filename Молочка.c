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
    printf("РАСЧЕТ СТОИМОСТИ ДОСТАВКИ МОЛОКА\n");
    printf("---------------------------------\n\n");
    printf("УСЛОВИЯ:\n");
    printf("- Ежедневный объем доставки: %d литра.\n", DAILY_VOLUME);
    printf("- Цена за литр в марте: %.2f руб.\n", price_march);
    printf("- Величина 'a' для расчета повышения цены: %.2f руб.\n", a);
    printf("- С 1 апреля цена за литр увеличивается на (x + a) = %.2f + %.2f = %.2f руб.\n", x, a, (x + a));
    printf("- Новая цена с 1 апреля: %.2f руб. за литр.\n\n", price_april);
    printf("РАСЧЕТ:\n");
    printf("- Стоимость доставки в марте: %d дн. * %d л/дн. * %.2f руб./л = %.2f руб.\n", DAYS_IN_MARCH, DAILY_VOLUME, price_march, total_march);
    printf("- Стоимость доставки в апреле: %d дн. * %d л/дн. * %.2f руб./л = %.2f руб.\n", DAYS_IN_APRIL, DAILY_VOLUME, price_april, total_april);
    printf("--------------------------------\n");
    printf("ОБЩАЯ СУММА К ОПЛАТЕ ЗА МАРТ И АПРЕЛЬ: %.2f руб.\n", total_to_pay);

    return 0;
}