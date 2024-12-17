#include<stdio.h>
void nhapMang(int *mang, int kichThuoc){
    for (int i = 0; i < kichThuoc; i++){
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &mang[i]);
    }
}
void inSoChan(int *mang, int kichThuoc){
    printf("Cac phan tu la so chan: ");
    for (int i = 0; i < kichThuoc; i++){
        if (mang[i] % 2 == 0) {
            printf("%d ", mang[i]);
        }
    }
}

int laSoNguyenTo(int n){
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0) return 0;
    }
    return 1;
}

void inSoNguyenTo(int *mang, int kichThuoc){
    printf("Cac phan tu la so nguyen to: ");
    for (int i = 0; i < kichThuoc; i++){
        if (laSoNguyenTo(mang[i])){
            printf("%d ", mang[i]);
        }
    }
}
void daoNguocMang(int *mang, int kichThuoc){
    for (int i = 0; i < kichThuoc / 2; i++){
        int temp = mang[i];
        mang[i] = mang[kichThuoc - i - 1];
        mang[kichThuoc - i - 1] = temp;
    }
}
void sapXepTangDan(int *mang, int kichThuoc) {
    for (int i = 0; i < kichThuoc - 1; i++) {
        for (int j = i + 1; j < kichThuoc; j++){
            if (mang[i] > mang[j]) {
                int temp = mang[i];
                mang[i] = mang[j];
                mang[j] = temp;
            }
        }
    }
}
void sapXepGiamDan(int *mang, int kichThuoc){
    for (int i = 0; i < kichThuoc - 1; i++) {
        for (int j = i + 1; j < kichThuoc; j++){
            if (mang[i] < mang[j]) {
                int temp=mang[i];
                mang[i]=mang[j];
                mang[j]=temp;
            }
        }
    }
}
int timKiem(int *mang, int kichThuoc, int giaTri){
    for (int i = 0; i< kichThuoc; i++){
        if (mang[i]==giaTri) {
            return i;
        }
    }
    return -1;
}
int main() {
    int mang[100];
    int kichThuoc;
    int choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. In ra cac phan tu la so chan\n");
        printf("3. In ra cac phan tu la so nguyen to\n");
        printf("4. Dao nguoc mang\n");
        printf("5. Sap xep mang\n");
        printf("6. Nhap vao mot phan tu va tim kiem phan tu trong mang\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Nhap so phan tu cua mang: ");
                scanf("%d", &kichThuoc);
                nhapMang(mang, kichThuoc);
                break;
            case 2:
                inSoChan(mang, kichThuoc);
                break;
            case 3:
                inSoNguyenTo(mang, kichThuoc);
                break;
            case 4:
                daoNguocMang(mang, kichThuoc);
                printf("Mang sau khi dao nguoc: ");
                for (int i = 0; i<kichThuoc; i++) {
                    printf("%d ", mang[i]);
                }
                break;
            case 5:
                printf("1. Tang dan\n");
                printf("2. Giam dan\n");
                printf("Lua chon cua ban: ");
                int luachon;
                scanf("%d", &luachon);
                if (luachon == 1){
                    sapXepTangDan(mang, kichThuoc);
                } else if (luachon==2){
                    sapXepGiamDan(mang, kichThuoc);
                }
                printf("Mang sau khi sap xep: ");
                for (int i = 0; i <kichThuoc; i++){
                    printf("%d ", mang[i]);
                }
                printf("\n");
                break;
            case 6:
                printf("Nhap gia tri can tim: ");
                int giaTri;
                scanf("%d", &giaTri);
                int viTri = timKiem(mang, kichThuoc, giaTri);
                if (viTri != -1) {
                    printf("Phan tu %d ton tai\n", giaTri);
                } else {
                    printf("Phan tu %d khong duoc tim thay trong mang\n", giaTri);
                }
                break;
            case 7:
                printf("Thoat chuong trinh");
                break;
        }
    } while (choice != 7);
    return 0;
}

