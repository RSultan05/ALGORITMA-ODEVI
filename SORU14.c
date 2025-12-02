/*Kullanıcıdan alınan bilgilerle hız durumu kontrol etme*/

#include<stdio.h>

int main() {

    float mesafe=0.0, hiz;
    int hiz_siniri;

    while(mesafe <=10.0) {
        printf("10 km'lik yolunuzun kaçıncı km'sindesiniz?(çıkış için 0): ");
        scanf("%f",&mesafe);
        
        printf("Anlık Hızınız(km/h): ");
        scanf("%f", &hiz);

        if (hiz == 0) {
            printf("Araç hareket halinde değil.\n");
            break;
        }

        else if (mesafe > 0 && mesafe <= 3.0) {
            hiz_siniri == 50;
        }

        else if (mesafe > 3.0 && mesafe <= 6.0) {
            hiz_siniri == 70;
        }

        else if (mesafe > 6.0 && mesafe <= 10.0) {
            hiz_siniri == 90;
        }

        printf("Bulunduğunuz konumun hız sınırı: %d km/h\n", hiz_siniri);

        if (hiz <= hiz_siniri) {
            printf("Hızınız Uygun\n");
        }

        else if (hiz > hiz_siniri && hiz <= hiz_siniri + 10) {
            printf("UYARI! Hız Sınırını Aştını!\n");
        }

        else if (hiz > hiz_siniri + 10 && hiz <= hiz_siniri + 30) {
            printf("UYARI! Orta Seviye Hız İhlali. CEZA uygulanır\n");
        }

        else {
            printf("UYARI! İleri Seviye Hız İhlali. Yüksek CEZA uygulanır\n");
        }

    }

    return 0;
        
            
    
}