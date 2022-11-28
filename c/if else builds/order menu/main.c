#include <stdio.h>
#include <stdlib.h>

int main()
{
    int siparisturu, baslangic, arasicak, salata, anayemek, tatli, devam, odeme;

    menu:
    printf("Lutfen siparis vermek istediginiz turun basindaki rakami giriniz.\n");
    printf("1. Baslangiclar\n");
    printf("2. Ara Sicaklar\n");
    printf("3. Salatalar\n");
    printf("4. Ana Yemekler\n");
    printf("5. Tatlilar\n");

    scanf("%d", &siparisturu);


    switch(siparisturu){

    case 1:
        printf("Lutfen siparis vermek istediginiz baslangicin basindaki rakami giriniz\n");
        printf("1. Tavuklu Krep Pare\t28TL\n");
        printf("2. Kitir Tavuk\t\t32TL\n");
        printf("3. Soya Soslu Japon Boregi\t18TL\n");
        printf("4. Patates Tava\t\t12TL\n");
        printf("5. Peynirli Kalem Boregi\t25TL\n");
        scanf("%d", &baslangic);

            if (baslangic==1){
                baslangic+=27;
            }
            else if (baslangic==2){
                baslangic+=30;
            }
            else if (baslangic==3){
                baslangic+=30;
            }
            else if (baslangic==4){
                baslangic+=30;
            }
            else if (baslangic==5){
                baslangic+=30;
            }
        printf("siparisi bitirmek istiyorsaniz 2'ye devam etmek istiyorsaniz 1'ye basiniz.\n");
        scanf("%d", &devam);
        if (devam==1){
            goto menu;
        }
        else if (devam==2){
            goto cikis;
        }
        break;
    case 2:
        printf("Lutfen siparis vermek istediginiz ara sicagin basindaki rakami giriniz\n");
        printf("1. Firinda Kasarli Mantar\t32TL\n");
        printf("2. Patates Yataginda Mantar\t\t27TL\n");
        printf("3. Kirmizi Koz Biber Kizartmasi\t30TL\n");
        printf("4. Kalamar Tava\t\t48TL\n");
        printf("5. Karides Guvec\t43TL\n");
        scanf("%d", &arasicak);

        if (arasicak==1){
                arasicak+=31;
            }
            else if (arasicak==2){
                arasicak+=25;
            }
            else if (arasicak==3){
                arasicak+=27;
            }
            else if (arasicak==4){
                arasicak+=44;
            }
            else if (arasicak==5){
                arasicak+=38;
            }
        printf("siparisi bitirmek istiyorsaniz 2'ye devam etmek istiyorsaniz 1'ye basiniz.\n");
        scanf("%d", &devam);
        if (devam==1){
            goto menu;
        }
        else if (devam==2){
            goto cikis;
        }
        break;
    case 3:
        printf("Lutfen siparis vermek istediginiz salatanin basindaki rakami giriniz\n");
        printf("1. Rus Salatasi\t22TL\n");
        printf("2. Caprese Makarna Salatasi\t20TL\n");
        printf("3. Pancar Salatasi\t15TL\n");
        printf("4. Cilekli Kinoa Salatasi\t28TL\n");
        printf("5. Tabbule\t15TL\n");
        scanf("%d", &salata);

        if (salata==1){
                salata+=21;
            }
            else if (salata==2){
                salata+=18;
            }
            else if (salata==3){
                salata+=12;
            }
            else if (salata==4){
                salata+=24;
            }
            else if (salata==5){
                salata+=10;
            }
        printf("siparisi bitirmek istiyorsaniz 2'ye devam etmek istiyorsaniz 1'ye basiniz.\n");
        scanf("%d", &devam);
        if (devam==1){
            goto menu;
        }
        else if (devam==2){
            goto cikis;
        }
        break;
    case 4:
        printf("Lutfen siparis vermek istediginiz ana yemegin basindaki rakami giriniz\n");
        printf("1. Tavuklu Siron\t48TL\n");
        printf("2. Bugu Kebabi\t52TL\n");
        printf("3. Antrikot Kebap\t75TL\n");
        printf("4. Chipotle Soslu Tavuk\t68TL\n");
        printf("5. Etli Guvec\t55TL\n");
        scanf("%d", &anayemek);

        if (anayemek==1){
                anayemek+=47;
            }
            else if (anayemek==2){
                anayemek+=50;
            }
            else if (anayemek==3){
                anayemek+=72;
            }
            else if (anayemek==4){
                anayemek+=64;
            }
            else if (anayemek==5){
                anayemek+=50;
            }
        printf("siparisi bitirmek istiyorsaniz 2'ye devam etmek istiyorsaniz 1'ye basiniz.\n");
        scanf("%d", &devam);
        if (devam==1){
            goto menu;
        }
        else if (devam==2){
            goto cikis;
        }
        break;
    case 5:
        printf("Lutfen siparis vermek istediginiz tatlinin basindaki rakami giriniz\n");
        printf("1. Affogato\t25TL\n");
        printf("2. Fiona\t22TL\n");
        printf("3. Noble\t28TL\n");
        printf("4. Uno Mattina\t35TL\n");
        printf("5. Velvet Amore\t25TL\n");
        scanf("%d", &tatli);

        if (tatli==1){
                tatli+=47;
            }
            else if (tatli==2){
                tatli+=50;
            }
            else if (tatli==3){
                tatli+=72;
            }
            else if (tatli==4){
                tatli+=64;
            }
            else if (tatli==5){
                tatli+=50;
            }
        printf("siparisi bitirmek istiyorsaniz 2'ye devam etmek istiyorsaniz 1'ye basiniz.\n");
        scanf("%d", &devam);
        if (devam==1){
            goto menu;
        }
        else if (devam==2){
            goto cikis;
        }
        break;
    default:
        printf("lutfen 1-5 arasi bir rakam giriniz");
        goto menu;
    }
    cikis:
    odeme=baslangic+arasicak+salata+anayemek+tatli;
    printf("Siparisiniz tamamlandi. Odemeniz %d", odeme);

    return 0;
}
