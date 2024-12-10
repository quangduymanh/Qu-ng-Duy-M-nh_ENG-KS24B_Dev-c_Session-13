#include<stdio.h>
void inputMatrix(int matrix[100][100],int rows,int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("Nhap gia tri cho phan tu [%d][%d]:",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
}
void printMatrix(int matrix[100][100],int rows,int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%4d",matrix[i][j]);
        }
        printf("\n");
    }
}
void printCorners(int matrix[100][100],int rows,int cols){
    printf("Cac phan tu o goc:\n");
    printf("%d %d\n",matrix[0][0],matrix[0][cols-1]);
    if(rows>1){
        printf("%d %d\n",matrix[rows-1][0],matrix[rows-1][cols-1]);
    }
}
void printBoundary(int matrix[100][100],int rows,int cols){
    printf("Cac phan tu tren duong bien:\n");
    for(int j=0;j<cols;j++)printf("%4d",matrix[0][j]);
    printf("\n");
    for(int i=1;i<rows-1;i++){
        printf("%4d",matrix[i][0]);
        for(int j=1;j<cols-1;j++)
        if(cols>1)printf("%4d",matrix[i][cols-1]);
        printf("\n");
    }
    if(rows>1){
        for(int j=0;j<cols;j++)printf("%4d",matrix[rows-1][j]);
        printf("\n");
    }
}
void printDiagonals(int matrix[100][100],int rows,int cols){
    printf("Cac phan tu tren duong cheo chinh:");
    for(int i=0;i<rows&&i<cols;i++){
        printf("%d ",matrix[i][i]);
    }
    printf("\nCac phan tu tren duong cheo phu:");
    for(int i=0;i<rows&&i<cols;i++){
        printf("%d ",matrix[i][cols-i-1]);
    }
    printf("\n");
}
int main(){
    int matrix[100][100],rows,cols,choice;
    printf("Nhap so hang cua ma tran:");
    scanf("%d",&rows);
    printf("Nhap so cot cua ma tran:");
    scanf("%d",&cols);
    do{
        printf("\n===MENU===\n");
        printf("1.Nhap gia tri cac phan tu cua mang\n");
        printf("2.In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3.In ra cac phan tu o goc theo ma tran\n");
        printf("4.In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("5.In ra cac phan tu tren duong cheo chinh va cheo phu theo ma tran\n");
        printf("6.In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7.Thoat\n");
        printf("Moi ban chon:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                inputMatrix(matrix,rows,cols);
                break;
            case 2:
                printMatrix(matrix,rows,cols);
                break;
            case 3:
                printCorners(matrix,rows,cols);
                break;
            case 4:
                printBoundary(matrix,rows,cols);
                break;
            case 5:
                printDiagonals(matrix,rows,cols);
                break;
            case 6:
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le.Vui long chon lai.\n");
        }
    }while(choice!=7);
    return 0;
}
