#include <stdio.h>

int main() {
    int so, hangTram, hangChuc, hangDonVi;
    printf("Cac so Armstrong co 3 chu so la:\n");
    for (so = 100; so <= 999; so++) {
        hangTram = so / 100;            
        hangChuc = (so / 10) % 10;      
        hangDonVi = so % 10;            
        if (so == hangTram * hangTram * hangTram +
                  hangChuc * hangChuc * hangChuc +
                  hangDonVi * hangDonVi * hangDonVi) {
            printf("%d\n", so);
        }
    }
    return 0;
}
