/*Kullnıcıdan alınan bilgilerle bilet ücreti hesaplama*/

#include<stdio.h>

int main() {
    
    int yas;
    double ucret=150;
    char ogrenci;
    
    printf("Yaşınızı giriniz: ");
    scanf(" %d", &yas);
    
    if (yas<=7) {
        ucret += 0;
    }
    
    else if (yas>7 && yas<=18) {
        ucret = ucret - ucret * 0.4;
    }
    
    else if (yas>18 && yas<25) {
        ucret = ucret - ucret * 0.1;
    }
    
    else if (yas>25 && yas<=64) {
        ucret += 0;
    }
    
    else if (yas>=65) {
        ucret = ucret - ucret * 0.3;
    }
    
    printf("Öğrenci misiniz?(e=evet, h=hayır): ");
    scanf(" %c", &ogrenci);
    
    if (ogrenci == 'h') {
        ucret += 0;
    }
    
    else if (ogrenci == 'e') {
        ucret = ucret - ucret * 0.2;
    }
    
    printf("Bilet Ücreti:%.0f", ucret);
    
    return 0;
}