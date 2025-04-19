#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct SinhVien {
    char hoten[50];
    int tuoi;
    float diemTB;
    struct SinhVien *next;
};

// Hàm tạo node mới
struct SinhVien* taoSV(char *ht, int t, float dtb) {
    struct SinhVien *sv = (struct SinhVien*)malloc(sizeof(struct SinhVien));
    strcpy(sv->hoten, ht);
    sv->tuoi = t;
    sv->diemTB = dtb;
    sv->next = NULL;
    return sv;
}

// Hàm in danh sách
void inDS(struct SinhVien *head) {
    int stt = 1;
    printf("\n%-5s %-20s %-6s %-7s\n", "STT", "Ho ten", "Tuoi", "Diem TB");
    while (head != NULL) {
        printf("%-5d %-20s %-6d %-7.2f\n", stt++, head->hoten, head->tuoi, head->diemTB);
        head = head->next;
    }
}

// Hàm chèn SV trước 1 SV tên nào đó
void chenTruoc(struct SinhVien **head, char *tenChen, struct SinhVien *moi) {
    struct SinhVien *p = *head, *prev = NULL;
    while (p != NULL && strcmp(p->hoten, tenChen) != 0) {
        prev = p;
        p = p->next;
    }

    if (p == NULL) {
        printf("Khong tim thay sinh vien co ten %s.\n", tenChen);
        return;
    }

    if (prev == NULL) {
        moi->next = *head;
        *head = moi;
    } else {
        prev->next = moi;
        moi->next = p;
    }
}

// Hàm xóa SV theo tên
void xoaTheoTen(struct SinhVien **head, char *tenXoa) {
    struct SinhVien *p = *head, *prev = NULL;

    while (p != NULL && strcmp(p->hoten, tenXoa) != 0) {
        prev = p;
        p = p->next;
    }

    if (p == NULL) {
        printf("Khong tim thay sinh vien co ten %s.\n", tenXoa);
        return;
    }

    if (prev == NULL) {
        *head = p->next;
    } else {
        prev->next = p->next;
    }

    free(p);
}

int main() {
    struct SinhVien *dssv = NULL, *last = NULL;
    int n, tuoi;
    float diem;
    char ten[50];

    printf("Nhap so sinh vien: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Nhap ho ten: ");
        scanf("%s", ten);
        printf("Nhap tuoi: ");
        scanf("%d", &tuoi);
        printf("Nhap diem TB: ");
        scanf("%f", &diem);

        struct SinhVien *sv = taoSV(ten, tuoi, diem);
        if (dssv == NULL) {
            dssv = sv;
            last = sv;
        } else {
            last->next = sv;
            last = sv;
        }
    }

    inDS(dssv);

    // Chèn thêm 1 SV
    printf("\n--- Chen SV moi ---\n");
    printf("Nhap ten SV moi: ");
    scanf("%s", ten);
    printf("Nhap tuoi: ");
    scanf("%d", &tuoi);
    printf("Nhap diem TB: ");
    scanf("%f", &diem);
    struct SinhVien *moi = taoSV(ten, tuoi, diem);

    char tenTruoc[50];
    printf("Chen truoc SV ten gi? ");
    scanf("%s", tenTruoc);
    chenTruoc(&dssv, tenTruoc, moi);
    inDS(dssv);

    // Xóa 1 SV
    printf("\n--- Xoa SV ---\nNhap ten SV muon xoa: ");
    scanf("%s", ten);
    xoaTheoTen(&dssv, ten);
    inDS(dssv);

    return 0;
}
