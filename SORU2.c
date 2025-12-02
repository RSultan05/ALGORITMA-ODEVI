/*Kullanıcıdan alınan iki tam sayı ile toplama, çarpma, fark, bölüm, ve mod bulma.*/

#include<stdio.h>

int main()
{
    int sayi1, sayi2, Toplam, Carpim, Mod, Fark;
    float Bolum;
    
    printf("Birinci tam sayıyı girin: ");
    scanf(" %d", &sayi1);

    printf("İkinci tam sayıyı girin: ");
    scanf(" %d", &sayi2);
    
    
    Toplam = sayi1 + sayi2;
    Carpim = sayi1 * sayi2;
    
     
    if (sayi1 == sayi2) {
        Fark = 0;
    }

    else if (sayi1 > sayi2) {
        Fark = sayi1 - sayi2;
    }

    else {
        Fark = sayi2 - sayi1;
    }
    
    
    
    printf("Toplam: %d\n", Toplam);
    printf("Çarpım: %d\n", Carpim);
    printf("Fark: %d\n", Fark);

    
    
    if (sayi2 == 0) {
        printf("Mod: Tanımsız\n");
        printf("Bölüm: Tanımsız\n");
    }

    else {
        Mod = sayi1 % sayi2;
        Bolum = (float)sayi1 / (float)sayi2;
        
        printf("Mod: %d\n", Mod);
        printf("Bölüm: %f\n", Bolum);
    }

    
    return 0;
}

