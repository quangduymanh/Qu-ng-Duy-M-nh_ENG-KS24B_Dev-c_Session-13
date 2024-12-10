#include <stdio.h>
int main() {
    int rows, cols;
    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &rows);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &cols);
    int matran[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Nhap gia tri cho phan tu matran[%d][%d]: ", i, j);
            scanf("%d", &matran[i][j]);
        }
    }
    printf("Ma tran vua nhap:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matran[i][j]);
        }
        printf("\n");
    }
    return 0;
}
