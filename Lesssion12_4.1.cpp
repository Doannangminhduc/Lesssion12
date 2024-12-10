#include <stdio.h>

	int timSoLonNhat(int mang[], int kichThuoc) {
		    int max = mang[0];
		    for (int i = 1; i < kichThuoc; i++) {
		        if (mang[i] > max) {
		            max = mang[i];
		        }
		    }
		    return max;
		}
		
		int main() {
		    int kichThuoc;
		    
		    printf("Nhap kich thuoc cua mang: ");
		    scanf("%d", &kichThuoc);
		
		    if (kichThuoc <= 0) {
		        printf("Kich thuoc mang khong hop le!\n");
		        return 1;
		    }
		
		    int mang[kichThuoc];
		
		    printf("Nhap %d phan tu cua mang:\n", kichThuoc);
		    for (int i = 0; i < kichThuoc; i++) {
		        printf("Phan tu thu %d: ", i + 1);
		        scanf("%d", &mang[i]);
		    }
		
		    int soLonNhat = timSoLonNhat(mang, kichThuoc);
		    printf("So lon nhat trong mang la: %d\n", soLonNhat);
		
		
		
		
		
		
	    return 0;
	}

