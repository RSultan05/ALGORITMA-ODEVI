/*Kullnıcıdan alınan bilgilerle araba kiralama ücreti hesaplama*/

#include<stdio.h>

int main() {
    
    int gun_sayisi, koltuk_sayisi;
    double ucret=0;
    char secim;
    
    printf("Kaç günlük kiralayacaksınız?: ");
    scanf("%d", &gun_sayisi);
    
    printf("Çocuk koltuğu isteniyor mu?(e=evet, h=hayır): ");
    scanf(" %c", &secim);
    
    if (secim == 'h' || secim == 'H') {
        ucret = gun_sayisi * 100;
    }
    
    else if (secim == 'e' || secim == 'E') {
        printf("Çocuk koltuğu kaç tane isteniyor?: ");
        scanf("%d", &koltuk_sayisi);
        
        ucret = koltuk_sayisi * 15 *gun_sayisi + gun_sayisi*100;
    }
    
    if (gun_sayisi >= 7) {
        ucret = ucret * 0.1;
    }
    
    printf("Ücret: %.0f", ucret);
    
    return 0;
}