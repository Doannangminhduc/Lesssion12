#include <stdio.h>

void createMatrix(int rows, int cols, int matrix[100][100]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Nhap gia tri cho phan tu matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int rows, int cols, int matrix[100][100]) {
    printf("Ma tran ban vua nhap la:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    printf("Nhap so hang: ");
    scanf("%d", &rows);
    printf("Nhap so cot: ");
    scanf("%d", &cols);
    if (rows <= 0 || cols <= 0 || rows > 100 || cols > 100) {
        printf("So hang va so cot phai nam trong khoang 1 den 100!\n");
        return 1;
    }
    int matrix[100][100];
    createMatrix(rows, cols, matrix);
    printMatrix(rows, cols, matrix);
    return 0;
}

