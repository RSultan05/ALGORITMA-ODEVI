/*Kullanıcıcdan alınan bilgiyle kordinant sisteminde verilen konumun hangi bölgede olduğunu bulma*/

#include<stdio.h>

int main() {
    
    int x, y;
    
    printf("x değerini giriniz(x,y): ");
    scanf("%d", &x);
    
    printf("y değerini giriniz(x,y): ");
    scanf("%d", &y);
    
    if (x>0 && y>0) {
        printf("Konum Birinci Bölgede");
    }
    
    else if (x<0 && y>0) {
        printf("Konum İkinci Bölgede");
    }
    
    else if (x<0 && y<0) {
        printf("Konum Üçüncü Bölgede");
    }
    
    else if (x>0 && y<0) {
        printf("Konum Dördüncü Bölgede");
    }
    
    else if (x==0 && y==0) {
        printf("Konum Orijinde");
    }
    
    return 0;
}