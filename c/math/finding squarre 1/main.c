#include <stdio.h>
#include <stdlib.h>

int main()
{
    int KareninBirKenari;

    printf("Karenin bir kenari kac cm? \n");
    scanf("%d" ,&KareninBirKenari);

    printf("Karenin alani: %d cm \n", KareninBirKenari * KareninBirKenari );

    int DiktortgeninKisaKenari, DiktortgeninUzunKenari;

    /* printf("Diktortgenin kisa kenari kac cm? \n");
    scanf("%d" ,&DiktortgeninKisaKenari);
    printf("Diktortgenin uzun kenari kac cm? \n");
    scanf("%d" ,&DiktortgeninUzunKenari); */

    printf("Diktortgenin kenarlari kac cm? \n");
    scanf("%d%d" , &DiktortgeninKisaKenari, &DiktortgeninUzunKenari);

    /* printf("Diktortgenin alani: %d cm", DiktortgeninKisaKenari * DiktortgeninUzunKenari); */
    int DiktortgeninAlani = DiktortgeninKisaKenari * DiktortgeninUzunKenari;
    printf("Diktortgenin alani: %d cm \n", DiktortgeninAlani);



    return 0;
}
