#include <stdio.h>
int main(){
    int a, b, c, d, e, tong;
    printf("nhap so thu 1, 2, 3, 4, 5: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if(a % 2 != 0){
        tong = a;
    }
    if(b % 2 != 0){
        tong += b;
    }
    if(c % 2 != 0){
        tong += c;
    }
    if(d % 2 != 0){
        tong += d;
    }
    if(e % 2 != 0){
        tong += e;
    }
    printf("tong cac so le da nhap la: %d", tong);
    return 0;
}