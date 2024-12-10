#include <stdio.h>
int main() {
    int num1, num2;
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &num2);
    int a = num1, b = num2;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int c = a;
    printf("Uoc chung lon nhat cua %d va %d la: %d\n", num1, num2, c);
    return 0;
}
