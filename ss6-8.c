#include <stdio.h>

int main() {
    double soTienBanDau, laiSuatThang, tongSoTien, tienLai;
    int soThang;
    printf("Nhap so tien gui ban dau: ");
    scanf("%lf", &soTienBanDau);
    printf("Nhap lai xuat thang: ");
    scanf("%lf", &laiSuatThang);
    printf("Nhap so thang gui: ");
    scanf("%d", &soThang);
    tongSoTien = soTienBanDau;
    laiSuatThang /= 100;
    for (int i = 0; i < soThang; i++) {
        tongSoTien += tongSoTien * laiSuatThang;
    }
    tienLai = tongSoTien - soTienBanDau;
    printf("\nKet qua:\n");
    printf("Tien lai: %.3f\n", tienLai);
    printf("Tong Tien nhan duoc: %.3f\n", tongSoTien);
    return 0;
}
