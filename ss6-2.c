#include <stdio.h>
int main(){
    int a, b, c, d, e, chan = 0, le = 0;
    printf("nhap so thu 1, 2, 3, 4, 5: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if(a % 2 == 0){
        chan += 1; 
    } else 
        le += 1;
    if(b % 2 == 0){
        chan += 1; 
    } else 
        le += 1;
    if(c % 2 == 0){
        chan += 1; 
    } else 
        le += 1;
    if(d % 2 == 0){
        chan += 1; 
    } else 
        le += 1;
    if(e % 2 == 0){
        chan += 1; 
    } else 
        le += 1;
    printf("so luong so chan la: %d, so luong so le la: %d", chan, le);
    return 0;
}