#include <stdio.h>

void findMinMax(int *arr, int n, int *min, int *max) {
    *min = *max = *arr; // Khởi tạo min, max bằng phần tử đầu
    
    for (int i = 1; i < n; i++) {
        if (*(arr + i) < *min) {
            *min = *(arr + i);
        }
        if (*(arr + i) > *max) {
            *max = *(arr + i);
        }
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 7, 3, 8, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min, max;
    
    findMinMax(arr, n, &min, &max); // Truyền địa chỉ của min, max
    
    printf("Phan tu nho nhat: %d\n", min);
    printf("Phan tu lon nhat: %d\n", max);
    
    return 0;
}