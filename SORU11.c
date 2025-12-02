/*Kullanıcıdan alınan bilgilerle para yatırma ve çekme*/

#include<stdio.h>

int main() {

    int bakiye = 0, miktar;
    char islem;

    while(bakiye >= 300) {
        printf("Yapılacak İşlem (1=para çekme, 2=para yatırma): ");
        scanf(" %c", &islem);

        if (islem == '1') {
            printf("Miktarı giriniz: ");
            scanf(" %d", &miktar);
            
            bakiye += miktar;
            
            printf("Bakiye: %d", bakiye);
        }
        
        else if (islem == '2') {
            printf("Miktarı giriniz: ");
            scanf(" %d", &miktar);
            
            if (miktar > bakiye) {
                printf("Yetersiz Bakiye!\nBakiye: %d", bakiye);
                continue;
            }
           
            else{
                bakiye -= miktar;
                printf("Bakiye: %d", bakiye);
            } }
    }

    printf("Bakiye: %d", bakiye);

    return 0;
}