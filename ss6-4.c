#include <stdio.h>
#include <math.h>
int main(){
    int a, b, c;
    float delta, x1, x2;
    printf("nhap a, b, c la: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a == 0){
        if (b == 0){
            if (c == 0){
                printf("vo so nghiem");
            } else {
                printf("vo nghiem");
            }
        } else {
            x1  = (float)-c / b;
            printf("ket qua la %.2f", x1);
        }
    } else {
        delta = b * b - 4 * a * c;
        if (delta > 0){
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("ket qua la %.2f va %.2f", x1, x2);  
        } else if (delta == 0){
            x1 = (-b)/(2 * a);
            printf("ket qua la: %d", x1);
        } else {
            printf("vo nghiem thuc");
        }
    }
    return 0;
}