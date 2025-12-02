/*Kullanıcıdan alınan bilgilerle fatura ödeme*/

#include<stdio.h>

int main() {

    float miktar=0, elektrik=0, su=0, dogalgaz=0, toplam=elektrik+su+dogalgaz;
    char secim;

    while(secim != '0') {
        printf("Ödenecek fatura türü(1=elektrik, 2=su, 3=dogalgaz)(çıkış için 0): ");
        scanf("%c", &secim);

        if (secim == '0') {
            break;
        }
        
        
        
        if (miktar < 0) {
            printf("Geçersiz değer");
            continue;
            
        }
        
        else if (secim == '1') {
            printf("Ödenecek miktar: ");
            scanf("%f", &miktar);

            elektrik += miktar;
        }
        else if (secim == '2') {
            printf("Ödenecek miktar: ");
            scanf("%f", &miktar);

            su += miktar;
        }

        else if (secim == '3') {
            printf("Ödenecek miktar: ");
            scanf("%f", &miktar);

            dogalgaz += miktar;
        }

        
    }

    printf("Elektrik Ödemesi Toplamı: %f TL\n", elektrik);
    printf("Su Ödemesi Toplamı: %f TL\n", su);
    printf("Doğalgaz Ödemesi Toplamı: %f TL\n", dogalgaz);
    printf("Toplam Ödeme: %f TL\n", toplam);

    return 0;
        
    }
