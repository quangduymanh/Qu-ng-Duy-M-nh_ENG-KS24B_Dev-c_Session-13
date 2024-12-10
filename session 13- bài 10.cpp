#include<stdio.h>
void additem(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Nhap gia tri cho phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}
void showitem(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Phan tu thu arr[%d] co gia tri %d\n", i, arr[i]);
    }
}
int insertitem(int arr[], int size, int pos, int value) {
    if (pos < 0 || pos > size || size >= 100) {
        printf("Khong the them phan tu tai vi tri nay!\n");
        return size; 
    }
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value; 
    return size + 1; 
}
void updateitem(int arr[], int size, int pos, int value) {
    if (pos < 0 || pos >= size) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    arr[pos] = value;
}
int deleteitem(int arr[], int size, int pos) {
    if (pos < 0 || pos >= size) {
        printf("Vi tri khong hop le!\n");
        return size;
    }
    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    return size - 1;
}
int main() {
    int arr[100]; 
    int size = 0;
    int choose;

    do {
        printf("\nMENU\n");
        printf("1. Nhap gia tri cho cac phan tu\n");
        printf("2. In cac phan tu\n");
        printf("3. Them mot phan tu vao vi tri chi dinh\n");
        printf("4. Sua mot phan tu tai vi tri chi dinh\n");
        printf("5. Xoa mot phan tu tai vi tri chi dinh\n");
        printf("6. Sap xep cac phan tu\n");
        printf("   a. Giam dan\n");
        printf("   b. Tang dan\n");
        printf("7. Tim kiem phan tu nhap vao\n");
        printf("   a. Tim kiem tuyen tinh\n");
        printf("   b. Tim kiem nhi phan\n");
        printf("8. Thoat\n");
        printf("Moi ban chon: ");
        scanf("%d", &choose);

        switch (choose) {
            case 1: //Nhap gia tri cho cac phan tu
                printf("Moi ban nhap so luong phan tu: ");
                scanf("%d", &size);
                additem(arr, size);
                break;
            case 2: //In cac phan tu
                showitem(arr, size);
                break;
            case 3: { //Them mot phan tu vao vi tri chi dinh
                int pos, value;
                printf("Nhap vi tri can them: ");
                scanf("%d", &pos);
                printf("Nhap gia tri can them: ");
                scanf("%d", &value);
                size = insertitem(arr, size, pos, value);
                break;
            }
            case 4: { //Sua mot phan tu tai vi tri chi dinh
                int pos, value;
                printf("Nhap vi tri can sua: ");
                scanf("%d", &pos);
                printf("Nhap gia tri moi: ");
                scanf("%d", &value);
                updateitem(arr, size, pos, value);
                break;
            }
            case 5: { //Xoa mot phan tu tai vi tri chi dinh
                int pos;
                printf("Nhap vi tri can xoa: ");
                scanf("%d", &pos);
                size = deleteitem(arr, size, pos);
                break;
            }
            case 6: {
                break;
            }
            case 7: {
                break;
            }
            case 8:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
                break;
        }
    } while (choose != 8);
    return 0;
}
