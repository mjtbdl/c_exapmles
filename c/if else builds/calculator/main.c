#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int secim;
    float sayi1;
    float sayi2;
    int bitti;

    menu:
    printf("Lutfen yapmak istediginiz islemi secin\n");
    printf("1. Toplama\n2. Cikarma\n3. Carpma\n4. Bolme\n5. karekok alma\n6. ussunu alma\n");
    scanf("%d", &secim);

    if (secim>0 && secim<7){
        printf("Lutfen iki adet sayi giriniz.\n");
        scanf("%f%f", &sayi1,&sayi2);
    }

    switch(secim){

    case 1:

        printf("Toplam Sonucu: %.2f\n", sayi1+sayi2);
        break;

    case 2:

        printf("Cikarma Sonucu: %.2f\n", sayi1-sayi2);
        break;

    case 3:

        printf("Carpma Sonucu: .2f\n", sayi1*sayi2);
        break;

    case 4:

        printf("Bolme Sonucu: .2f\n", sayi1/sayi2);
        break;

    case 5:

        printf("%.2f sayisinin karekoku = %.2f\n%.2f sayisinin karekoku = %.2f\n", sayi1,sqrt(sayi1),sayi2,sqrt(sayi2));
        break;

    case 6:

        printf("%.2f sayisinin %.2f. ussu = %.2f", sayi1, sayi2, pow(sayi1,sayi2));
        break;

    default:
        printf("Lutfen 1-6 arasinda bir sayi giriniz\n");
        break;
    }
    printf("Lutfen baska bir islem yapmak istiyorsaniz 1'e cikmak istiyorsaniz ise herhangi bir tusa basin\n");
    scanf("%d", &bitti);
        if (bitti == 1){
            printf("Tekrar hosgeldiniz");
            goto menu;
        }
        else{
            printf("Asko BYE BYE");
            goto cikis;
        }
    cikis:
    return 0;
}
