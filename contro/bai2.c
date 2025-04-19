#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = arr; // Con trỏ trỏ đến đầu mảng
    
    printf("Mang la: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(ptr + i)); // Truy cập phần tử bằng con trỏ
    }
    
    return 0;
}