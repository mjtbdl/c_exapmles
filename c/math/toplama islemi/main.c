#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int sayi1;
    //sayi1 = 5;

    /* hepsi ayni sey, hepsini sirayla yaparsan da 3 defa toplar sonuc 8 olur.
    sayi1++;
    sayi1 = sayi1 + 1;
    sayi1 +=1;
    printf("%d" , sayi1 );
    */

    // mod alma da %= yani bir sayinin baska bir sayiyla bolumunden kalan

    int sayi2, sayi3, sayi4;
    sayi2 = 6;
    sayi3 = sayi2++;
    sayi4 = ++sayi2;
    printf("%d %d %d\n" , sayi2, sayi3,sayi4);

    return 0;
}
