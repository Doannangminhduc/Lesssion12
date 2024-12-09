#include <stdio.h>

	long long tinhGiaiThua(int n) {
		    if (n == 0 || n == 1) {
		        return 1;
		    } else {
		        return n * tinhGiaiThua(n - 1);
		    }
		}
		
		int main() {
		    int so;
		    printf("Nhap mot so nguyen: ");
		    scanf("%d", &so);
		
		    if (so < 0) {
		        printf("Khong the tinh giai thua cua so am.\n");
		    } else {
		        long long ketQua = tinhGiaiThua(so);
		        printf("Giai thua cua %d la: %lld\n", so, ketQua);
		    }
		
	    return 0;
	}

