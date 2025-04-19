#include <stdio.h>
#include <string.h>

struct MatHang {
    char ten[50];
    int dongia;
    int soluong;
    int thanhtien;
};

void hoanVi(struct MatHang *a, struct MatHang *b) {
    struct MatHang temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n, i, j, tong = 0;
    struct MatHang mh[100];

    printf("Nhap so luong mat hang: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Nhap ten hang thu %d: ", i + 1);
        scanf("%s", mh[i].ten);
        printf("Nhap don gia: ");
        scanf("%d", &mh[i].dongia);
        printf("Nhap so luong: ");
        scanf("%d", &mh[i].soluong);
        mh[i].thanhtien = mh[i].dongia * mh[i].soluong;
        tong += mh[i].thanhtien;
    }

    // Sắp xếp theo tên hàng (tăng dần)
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(mh[i].ten, mh[j].ten) > 0) {
                hoanVi(&mh[i], &mh[j]);
            }
        }
    }

    // In ra bảng thông tin
    printf("\n%-5s %-10s %-8s %-10s %-10s\n", "STT", "Ten Hang", "Don gia", "So luong", "Thanh tien");
    for (i = 0; i < n; i++) {
        printf("%-5d %-10s %-8d %-10d %-10d\n", i + 1, mh[i].ten, mh[i].dongia, mh[i].soluong, mh[i].thanhtien);
    }
    printf("Tong tien = %d\n", tong);

    return 0;
}
