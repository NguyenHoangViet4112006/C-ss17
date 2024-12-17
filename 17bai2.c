#include <stdio.h>
void nhapChuoi(char *chuoi, int size){
    printf("Nhap vao mot chuoi: ");
    fgets(chuoi, size, stdin);
}
int demChuCai(char *chuoi) {
    int count = 0;
    for (int i = 0; i < strlen(chuoi); i++){
        if ((chuoi[i] >= 'A' && chuoi[i] <= 'Z') || (chuoi[i] >= 'a' && chuoi[i] <= 'z')){
            count++;
        }
    }
    return count;
}
int demChuSo(char *chuoi){
    int count = 0;
    for (int i = 0; i < strlen(chuoi); i++){
        if (chuoi[i] >= '0' && chuoi[i] <= '9'){
            count++;
        }
    }
    return count;
}
int demKyTuDacBiet(char *chuoi){
    int count = 0;
    return count;
}
int main(){
    char chuoi[100];
    int choice;
    do {
        printf("\nMENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi\n");
        printf("3. Dem so luong chu cai trong chuoi va in ra\n");
        printf("4. Dem so luong chu so trong chuoi va in ra\n");
        printf("5. Dem so luong ky tu dac biet trong chuoi va in ra\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        getchar();

        switch (choice){
            case 1:
                nhapChuoi(chuoi, sizeof(chuoi));
                break;
            case 2:
                printf("Chuoi da nhap: %s\n", chuoi);
                break;
            case 3:
                printf("So luong chu cai trong chuoi: %d\n", demChuCai(chuoi));
                break;
            case 4:
                printf("So luong chu so trong chuoi: %d\n", demChuSo(chuoi));
                break;
            case 5:
                printf("So luong ky tu dac biet trong chuoi: %d\n", demKyTuDacBiet(chuoi));
                break;
            case 6:
                printf("Thoat chuong trinh");
                break;

        }
    } while (choice != 6);

    return 0;
}

