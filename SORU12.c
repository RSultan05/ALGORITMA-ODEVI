/*Kullanıcıdan alınan bilgilerle araç yakıt kullanım takibi*/

#include<stdio.h>

int main() {
    
    float yakit, toplam_yakit=0, ortalama=toplam_yakit/gun_sayisi;
    int gun_sayisi=1, giris_sayisi=0;

    printf("Gün %d yakıt litresi(çıkış için 0): ", gun_sayisi);
    scanf(" %f", &yakit);

    while(yakit != 0) {
        if (yakit < 0) {
            printf("Geçersiz yakıt miktarı!");
        }

        else {
            toplam_yakit += yakit;
            gun_sayisi++;
            giris_sayisi++;
        }

        printf("Gün %d yakıt litresi(çıkış için 0): ", yakit);
    }

    if(giris_sayisi >= 1) {
        Printf("Toplam Yakıt: %f\n", toplam_yakit);
        printf("Girilen Gün Sayısı: %d\n", gun_sayisi);
        printf("Ortalama Yakıt Tüketimi: %f\n", ortalama);
    }

    return 0;
} 