#include <stdio.h>
int main(){
    int matKhau = 696969, matKhauNguoiDungNhap;
    printf("hay nhap mat khau: ");
    scanf("%d", &matKhauNguoiDungNhap);
    while (matKhauNguoiDungNhap != matKhau){
        printf("nhap mat khau sai, hay nhap lai: ");
        scanf("%d",&matKhauNguoiDungNhap);
    }
    printf("da nhap dung mat khau");
    return 0;
}