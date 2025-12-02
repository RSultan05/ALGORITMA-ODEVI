/*kullanıcılardan alınan bilgilerle spor Salonu Üyelik ve Ücret Hesabı*/

#include<stdio.h>

int main() {
    
    int ders_sayisi;
    double ucret=0;
    char  secim;
    
    printf("Üyelik süresi?(a=aylık, y=yıllık): ");
    scanf(" %c", &secim);
    
    if (secim == 'a') {
        ucret += 200;
    }
    
    else if (secim == 'y') {
        ucret += 2000;
    }
    
    printf("Alacağınız ders sayısı?: ");
    scanf(" %d", &ders_sayisi);
    
    ucret=ders_sayisi*50 + ucret;
    
    printf("Ücret: %.0f", ucret);
    
    return 0;
}
