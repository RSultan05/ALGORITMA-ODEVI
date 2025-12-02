/*Seçimli hikaye oyunu*/

#include <stdio.h>

int main() {
    char secim;

baslangic:
    printf("Orman yürüyüşü sırasında kayboldunuz, dönüş yolunu bulmalısınız.\n"
           "Karşınıza iki yol çıkıyor.\nHangi yoldan gideceksiniz?(1=sağ, 2=sol): ");
    scanf(" %c", &secim);

    if (secim == '2') {
        printf("\n\nYürürken çukura denk geldiniz ve çukura düştünüz.\nKAYBETTİNİZ.(t=tekrar oynamak için): ");
        
        if (secim == 't') {
            goto baslangic;
        } 
        
        else {
            goto son;
        }
    } 
    
    else if (secim == '1') {
        printf("\n\nBir süre yürüdükten sonra karşınıza iki yol çıkıyor.\n"
               "Sol yola doğru bir sincap görüyorsunuz.\nHangi yoldan gideceksiniz?(1=sağ, 2=sol): ");
        scanf(" %c", &secim);

        if (secim == '1') {
            printf("\n\nOrmanda uzun süre yürüdünüz ve yolunuzu bulamadınız.\nKAYBETTİNİZ.(t=tekrar oynamak için): ");

            if (secim == 't') {
                goto baslangic;
            } 
            
            else {
                goto son;
            }
        } 
        
        else if (secim == '2') {
            printf("\n\nSincap sizi bir sürü mantarın olduğu bir yere götürüyor.\n"
                   "Acıkmaya başlıyorsunuz.\nMantar yiyecek misiniz?(e=evet, h=hayır): ");
            scanf(" %c", &secim);

            if (secim == 'e') {
                printf("\n\nMantar zehirliydi, zehirlendiniz.\nKAYBETTİNİZ.(t=tekrar oynamak için): ");

                if (secim == 't') {
                    goto baslangic;
                } 
                
                else {
                    goto son;
                }
            } 
            
            else if (secim == 'h') {
                printf("\n\nMantarlardan yemediniz ve yolunuz devam ettiniz.\n"
                       "Bir süre yürüdükten sonra karşınıza iki yol çıkıyor.\n"
                       "Sağ yoldan sesler duyuyorsunuz.Hangi yoldan gideceksiniz?(1=sağ, 2=sol): ");
                scanf(" %c", &secim);

                if (secim == '2') {
                    printf("\n\nOrmanda uzun süre yürüdünüz ve yolunuzu bulamadınız.\nKAYBETTİNİZ.(t=tekrar oynamak için): ");

                    if (secim == 't') {
                        goto baslangic;
                    } 
                    
                    else {
                        goto son;
                    }
                } 
                
                else if (secim == '1') {
                    printf("\n\nSeslere doğru yürüdüğünüzde başka yürüyüş yapan kişileri görüyorsunuz.\n"
                           "Onlar size yolunuzu bulmanıza yardım ediyor.\nKAZANDINIZ.(t=tekrar oynamak için): ");
                    scanf(" %c", &secim);

                    if (secim == 't') {
                        goto baslangic;
                    } 
                    
                    else {
                        goto son;
                    }
                } 
                
                
            } 
        } 
    } 

son:
    return 0;
}