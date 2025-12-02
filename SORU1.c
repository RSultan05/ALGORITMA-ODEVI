/*kullanıcının girdiği iki sayıyı karşılaştırma.*/

#include<stdio.h>

int main() {
    
    int sayi1, sayi2;

    printf("Birinci sayıyı girin: ");
    scanf("%d", &sayi1);

    printf("İkinci sayıyı girin: ");
    scanf("%d", &sayi2);


    if (sayi1 != sayi2) {
        
        if (sayi1 > sayi2) {
            printf("%d büyüktür %d\n", sayi1, sayi2);
        }

        else {
            printf("%d küçüktür %d\n", sayi1, sayi2);
        }
    }

    else { 
        printf("%d eşittir %d\n", sayi1, sayi2);
    }

    return 0;

}