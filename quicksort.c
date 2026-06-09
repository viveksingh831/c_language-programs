#include <stdio.h>

int partition(int a[], int low, int high) {
    int idx = low - 1;
    int pivot = a[high];
    for (int j = low; j < high; j++) {
        if (a[j] <= pivot) {
            idx++;
            int tmp = a[j];
            a[j] = a[idx];
            a[idx] = tmp;
        }
    }
    idx++;
    int tmp = a[high];
    a[high] = a[idx];
    a[idx] = tmp;
    return idx;
}

void quicksort(int a[], int low, int high) {
    if (low < high) {
        int pividx = partition(a, low, high);
        quicksort(a, low, pividx - 1);
        quicksort(a, pividx + 1, high);
    }
}

int main(void) {
    int n, i;
    printf("enter the number of elements in the array:-\n");
    scanf("%d", &n);
    
    int a[n];
    printf("enter the %d elements \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    quicksort(a, 0, n - 1);
    printf("sorted array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}