#include <stdio.h>

void sortArray(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                // Hoán đổi bằng con trỏ
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 7, 3, 8, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    sortArray(arr, n);
    
    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i)); // In bằng con trỏ
    }
    
    return 0;
}