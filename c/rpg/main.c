#include <stdio.h>
#include <stdlib.h>
int x =8;
int main()
{
    int zeka=0,guc=0,hiz=0,ikna=0;
    printf("Bilgisyarinda oyun oynarken bir anda halsizlestin ve gozun karardi... Gozunu tekrar actiginda bembeyaz bir yerdeydin. \nKarsinda bembeyaz bir ekran vardi. uzerinde de belli basli yetenekler. \n Biraz inceledikten sonra toplam 8 yetenek hakkini 4 farkli yetenege dagitman gerektigini anladin.\n");
    printf("Sirasiyla yetenekler zeka, guc, hiz ve ikna idi.\n");
    printf("8 puanini yeteneklerine dagitman gerekiyor. dikkatli ol hayatin bunlara bagli.\n");

    printf("Lutfen zeka icin bir deger giriniz\n");
     scanf("%d",&zeka);
      zeka= ilkyetenek(zeka);
    printf("Lutfen guc icin bir deger giriniz\n");
     scanf("%d",&guc);
      guc= ilkyetenek(guc);
    printf("Lutfen hiz icin bir deger giriniz\n");
     scanf("%d",&hiz);
      hiz= ilkyetenek(hiz);
    printf("Lutfen ikna icin bir deger  giriniz\n");
     scanf("%d", &ikna);
      hiz= ilkyetenek(ikna);
    printf("zeka=%d,guc=%d,hiz=%d, ikna=%d, kalan yetenek puani=%d olarak ayarlanmistir\n.",zeka,guc,hiz,ikna,x);


    printf("Gozunu tekrar actiginda yemyesil bir vadide buldun kendini. kuslar civil civil otuyor etrafan hayvan sesleri geliyordu.\nAyaga kalkmaya calistiginda bir agirlik fark ettin ve daha sonra gumus rengi bir zirh giymis oldugunu anladin.\nneler oldugunu anlamadin ama odanda olmadigin kesindi.\n");
    printf("Biraz daha etrafa baktiginda yattigin yerin dibinde bir kilic ve kalkan oldugunu gordun.\nincelemek icin eline aldiktan hemen sonra aniden sana dogru yaklasan bir ses fark ettin.\nHizlica neler yapacagini dusunmen gerkiyordu.\n");
    printf("")


    }

      int ilkyetenek (int deger){

       while(deger>x){
        printf("Lutfen bu yetenek icin %d den daha dusuk bir deger giriniz\n",x);
        scanf("%d",&deger);
    }
    x= x-deger;
        return deger;





    //printf("Gozunu tekrar actiginda yemyesil bir vadide buldun kendini. kuslar civil civil otuyor etrafan hayvan sesleri geliyordu. Ayaga kalkmaya calistiginda bir agirlik fark ettin ve daha sonra gumus rengi bir zirh giymis oldugunu anladin. neler oldugunu anlamadin ama odanda olmadigin kesindi. biraz daha etrafa baktiginda yattigin yerin dibinde bir kilic ve kalkan oldugunu gordun. incelemek icin eline aldiktan hemen sonra aniden sana dogru yaklasan bir ses fark ettin. Hizlica neler yapacagini dusunmen gerkiyordu.");
    return 0;
}
