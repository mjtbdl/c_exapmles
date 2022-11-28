#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,x;

    printf("sirasiyla a,b,c ve x degerlerini giriniz. \n");
    scanf("%f%f%f%f" ,&a,&b,&c,&x);

    float sonuc = a*x*x + b*x +c;
    printf("denklemin sonucu %d", (int)sonuc);
     /* bir float degeri integer olarak gostermek istiyorsak degiskeninin basina int yazip daha sonra %d seklinde cagirarak goruntuleyebiliriz */
     /* donusum yaparken double>float>integer. yani floati inetegera bolmek istiyorsak ikisini de float yapmaliyiz*/

    return 0;
}
