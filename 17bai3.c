#include<stdio.h>
void nhapChuoi(char *chuoi, int size){
    printf("Nhap vao mot chuoi: ");
    fgets(chuoi, size, stdin);
}

void daoNguocChuoi(char *inputString, char *reverseString){
    int doDai=strlen(inputString);
    for (int i = 0;i <doDai; i++){
        *(reverseString + i) = *(inputString + doDai - i - 1);
    }
    *(reverseString + doDai) = ' ';
}
int demSoLuongTu(char *chuoi) {
    int count=0;
    int inWord=0;
    for (int i = 0; i<strlen(chuoi); i++){
        if (chuoi[i] != ' ' && inWord == 0){
            inWord=1;
            count++;
        } else if (chuoi[i]== ' '){
            inWord=0;
        }
    }
    return count;
}
void soSanhChuoi(char *chuoi1, char *chuoi2){
    int doDai1=strlen(chuoi1);
    int doDai2=strlen(chuoi2);
    if (doDai1>doDai2){
        printf("Chuoi moi ngan hon chuoi ban dau\n");
    } else if (doDai1 <doDai2){
        printf("Chuoi moi dai hon chuoi ban dau\n");
    } else {
        printf("Hai chuoi co do dai bang nhau\n");
    }
}
void inHoaChuCai(char *chuoi){
}
void themChuoi(char *chuoi1, char *chuoi2){
    strcat(chuoi1, chuoi2);
}
int main(){
    char chuoi1[100];
    char chuoi2[100];
    char reverseString[100];
    int choice;
    do {
        printf("\nMENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi dao nguoc\n");
        printf("3. Dem so luong tu trong chuoi\n");
        printf("4. Nhap vao chuoi khac, so sanh chuoi do voi chuoi ban dau\n");
        printf("5. In hoa tat ca chu cai trong chuoi\n");
        printf("6. Nhap vao chuoi khac va them chuoi do vao chuoi ban dau\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        getchar();
        switch (choice) {
            case 1:
                nhapChuoi(chuoi1, sizeof(chuoi1));
                break;
            case 2:
                daoNguocChuoi(chuoi1, reverseString);
                printf("Chuoi dao nguoc: %s\n", reverseString);
                break;
            case 3:
                printf("So luong tu trong chuoi: %d\n", demSoLuongTu(chuoi1));
                break;
            case 4:
                nhapChuoi(chuoi2, sizeof(chuoi2));
                soSanhChuoi(chuoi1, chuoi2);
                break;
            case 5:
                inHoaChuCai(chuoi1);
                printf("Chuoi sau khi in hoa: %s\n", chuoi1);
                break;
            case 6:
                nhapChuoi(chuoi2, sizeof(chuoi2));
                themChuoi(chuoi1, chuoi2);
                printf("Chuoi sau khi them: %s\n", chuoi1);
                break;
            case 7:
                printf("Thoat chuong trinh");
                break;
        }
    } while (choice != 7);
    return 0;
}

