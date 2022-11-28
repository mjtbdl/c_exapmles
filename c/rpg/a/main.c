#include <stdio.h>
#include <stdlib.h>
int x=8;
int main()
{

    int a=0,b=0,c=0;

    printf("Lutfen a icin bir deger giriniz\n");
    scanf("%d",&a);
    a=func(a);
    printf("Lutfen b icin bir deger giriniz\n");
    scanf("%d",&b);
     b=func(b);
       printf("Lutfen c icin bir deger giriniz\n");
    scanf("%d",&c);
     c=func(c);

        if(x==0){
        printf("a=%d,b=%d,c=%d, x=%d",a,b,c,x);
    }
    }

      int func (int karsilayan){

       while(karsilayan>x){
        printf("Lutfen bu harf icin yeni bir deger giriniz\n");
        scanf("%d",&karsilayan);
    }
    x=x-karsilayan;
        return karsilayan;
      }
