#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");
    //printf("%d",sizeof(int)); //verilerin kaç byte yer kapladığını bulmak için
    int tamSayi = 5; // 4 byte
    float kesirliSayi = 4.8; // 4byte
    double kesirliBuyukSayi = 6456468.165448; // 8 byte
    char karakter = 'A'; // 1 byte
    char karakterDizisi[8] = 'Anadolu'; // 7 byte
    //char içinde ne kadar karakter varsa ondan bir fazla bayt
    /* bastırmak için ise her bir değişkene özel olan bastırma biçiminin kullanılması gerekir.
    printf("%d", tamSayi); //decimal integer
    printf("%f", kesirliSayi); //float
    printf("%f", kesirliBuyukSayi); //float
    printf("%c", karakter); //char
    printf("%s", karakterDizisi); //search
    //bir float printinin virgülden sonrasında kaç sıfır olduğunu ayarlamak için ise prıntf(".2f") kullanılır.
    //her bir komutun çıktısının ayrı bir satırda olması için ise printf("%d\n") kullanılır. \n = next line, \t = tab
    */
    return 0;
}
