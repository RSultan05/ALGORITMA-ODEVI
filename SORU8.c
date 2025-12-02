/*Kullanıcıdan alınan biilgilerle sayı notlarını harf notlarına çevirme.*/

#include<stdio.h>

int main() {
    
    int not;
    
    printf("Notunuzu giriniz: ");
    scanf("%d", &not);
    
    if (not>=0 && not<40) {
        printf("notunuz FF\n");

    }
    
    else if (not>=40 && not<45) {
        printf("Notunuz FD");
    }
    
    else if (not>=45 && not<50) {
        printf("Notunuz DD");
    }
    
    else if (not>=50 && not<60) {
        printf("Notunuz DC");
    }
    
    else if (not>=60 && not<65) {
        printf("Notunuz CC");
    }
    
    else if (not>=65 && not<75) {
        printf("Notunuz BC");
    }
    
    else if (not>=75 && not<85) {
        printf("Notunuz BB");
    }
    
    else if (not>=85 && not<90) {
        printf("Notunuz BA");
    }
    
    else if (not>=90 && not<=1000) {
        printf("Notunuz AA");
    }
    
    return 0;
}
