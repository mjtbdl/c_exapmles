#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,onbinler, binler, yuzler, onlar, birler;

    printf("Bes basamakli bir sayi giriniz \n");
    scanf ("%d", &sayi);

    onbinler = sayi / 10000;
    binler = (sayi % 10000) / 1000;
    yuzler = (sayi % 1000) / 100;
    onlar = (sayi % 100) / 10;
    birler = sayi % 10;

    printf("Sayinin onbinler basamagindaki degeri: %d \n", onbinler);
    printf("Sayinin binler basamagindaki degeri: %d \n", binler);
    printf("Sayinin yuzler basamagindaki degeri: %d \n", yuzler);
    printf("Sayinin onlar basamagindaki degeri: %d \n", onlar);
    printf("Sayinin birler basamagindaki degeri: %d \n", birler);

    return 0;
}
