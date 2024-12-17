#include<stdio.h>
void nhapmang(int *arr, int size){
    for (int i = 0; i < size; i++){
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }
}
void hienThiMang(int *arr, int size){
    printf("Cac phan tu trong mang: ");
    for (int i =0; i< size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int tinhTong(int *arr, int size){
    int tong =0;
    for (int i=0; i < size; i++){
        tong += arr[i];
    }
    return tong;
}
int timMax(int *arr, int size){
    int max = arr[0];
    for (int i = 1; i<size; i++){
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int arr[100];
    int size;
    int choice;

    do {
        printf("\nMenu\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai cua mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Nhap so phan tu cua mang: ");
                scanf("%d", &size);
                nhapmang(arr, size);
                break;
            case 2:
                hienThiMang(arr, size);
                break;
            case 3:
                printf("Do dai cua mang la: %d\n", size);
                break;
            case 4:
                printf("Tong cac phan tu trong mang la: %d\n", tinhTong(arr, size));
                break;
            case 5:
                printf("Phan tu lon nhat trong mang la: %d\n", timMax(arr, size));
                break;
            case 6:
                printf("Thoat chuong trinh");
                break;
        }
    } while (choice != 6);

    return 0;
}

