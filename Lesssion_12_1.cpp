#include <stdio.h>
	
	int tinhTong(int a, int b) {
		    return a + b;
		}
		
		int main() {
		    int so1, so2;
		    printf("Nhap so thu nhat: ");
		    scanf("%d", &so1);
		    printf("Nhap so thu hai: ");
		    scanf("%d", &so2);
		
		
		    int tong = tinhTong(so1, so2);
		    printf("Tong cua hai so la: %d\n", tong);
		
	    return 0;
}
