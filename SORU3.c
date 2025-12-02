/*Kullanıcıdan alınan kargo bilgileriyle kargo ücreti hesaplama.*/

#include<stdio.h>

int main() {
    
    double kg, km, ucret=0;
    char paket_tipi, hizli_teslimat;
    
    printf("Kargo ağırlığı kaç kg?: ");
    scanf("%lf", &kg);
    
    if (kg>0 && kg<=1) {
        ucret += 20;
    }
    
    else if (kg>1 && kg<=5) {
        ucret += 40;
    }
    
    else if (kg>5 && kg<=10) {
        ucret += 70;
    }
    
    else if (kg>10) {
        ucret += 150;
    }
    
    printf("Mesafe kaç km?: ");
    scanf("%lf", &km);
    
    if (km<=100) {
        ucret += 10;
    }
    
    else if (km>100 && km<=500) {
        ucret += 30;
    }
    
    else if (km>500) {
        ucret += 60;
    }
    
    printf("Paket tipi nedir?(k:kırılgan, n:normal, s:soğuk Ürün): ");
    scanf(" %c", &paket_tipi);
    
    if (paket_tipi == 'k') {
        ucret += 25;
    }
    
    else if (paket_tipi == 'n') {
        ucret += 0;
    }
    
    else if (paket_tipi == 's') {
        ucret += 40;
    } 
    
    printf("Hızlı teslimat ister misiniz?(e:evet, h:hayır): ");
    scanf(" %c", &hizli_teslimat);
    
    if (hizli_teslimat == 'h') {
        ucret += 0;
    }
    
    else if (hizli_teslimat == 'e') {
        ucret = ucret * 1.2;
    }
    
    printf("Kargo Ücreti: %.2f", ucret);
    
    return 0;
}

