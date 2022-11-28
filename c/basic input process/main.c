#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    float kesirliSayi;
    double kesirliBuyukSayi;
    char karakter;
    char karakterDizisi[6];

    printf("Lutfen bir sayi degeri giriniz...\n");
    scanf("%d", &sayi);
    printf("Lutfen kesirli bir sayi degeri giriniz...\n");
    scanf("%f", &kesirliSayi);
    printf("Lutfen kesirli bir buyuk sayi degeri giriniz...\n");
    scanf("%lf", &kesirliBuyukSayi);
    printf("Lutfen bir karakter giriniz...\n");
    scanf(" %c", &karakter);
    printf("Lutfen bes karakter giriniz...\n");
    scanf("%s", karakterDizisi);

    printf ("Girdiginiz sayi: %d\n", sayi);
    printf ("Girdiginiz kesirli sayi: %f\n", kesirliSayi);
    printf ("Girdiginiz buyuk kesirli sayi: %lf\n", kesirliBuyukSayi);
    printf ("Girdiginiz karakter: %c\n", karakter);
    printf ("Girdiginiz bes karakter: %s\n", karakterDizisi);

    return 0;
}
