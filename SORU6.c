/*Kullanıcıdan alınan bilgilerle 2. dereceden Denklemin Kökünü Bulma*/

#include<stdio.h>
#include<math.h>

int main() {
    
    int a, b, c;
    double x1, x2, D;
    
    printf("a değerini giriniz(a^2*x + b*x + c): ");
    scanf("%d", &a);
    
    printf("b değerini giriniz(a^2*x + b*x + c): ");
    scanf("%d", &b);
    
    printf("c değerini giriniz(a^2*x + b*x + c): ");
    scanf("%d", &c);

    D=b*b - 4*a*c;
    
    if (D>0) {
        x1 = (-b + sqrt(D)) / (2*a);
        x2 = (-b - sqrt(D)) / (2*a);
        
    printf("x1: %lf\n", x1);
    printf("x2: %lf\n", x2);
    }
    
    else if (D<0) {
    printf("Gerçek kökü yoktur\n");
    }
    
    else if (D==0) {
        x1 = -b / (2*a);
        x2 = -b / (2*a);
    
    printf("x1: %lf\n", x1);
    printf("x2: %lf\n", x2);
    }
    
    return 0;
}