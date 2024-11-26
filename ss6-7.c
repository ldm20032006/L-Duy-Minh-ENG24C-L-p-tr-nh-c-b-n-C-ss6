#include <stdio.h>
int main(){
    int n, xGoc;
    printf("nhap vao so nguyen bat ky: ");
    scanf("%d", &n);
    xGoc = n;
    for(n; n > 0; n--){
        if (xGoc % n == 0){
            printf("%d ", n);
        }
    }
}