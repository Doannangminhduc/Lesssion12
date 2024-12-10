#include <stdio.h>

int timUCLN() {
    int a, b;
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main() {
    int ucln = timUCLN();
    printf("UCLN cua hai so vua nhap la: %d\n", ucln);
    return 0;
}


