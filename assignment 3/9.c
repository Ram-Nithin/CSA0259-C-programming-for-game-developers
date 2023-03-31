#include <stdio.h>

#define MAX_SIZE 100

void copy_array(int *arr1, int *arr2, int size)
{
    for (int i = 0; i < size; i++) {
        *(arr2 + i) = *(arr1 + i);
    }
}

int main()
{
    int arr1[MAX_SIZE], arr2[MAX_SIZE], size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }
    copy_array(arr1, arr2, size);
    printf("Elements of the copied array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    return 0;
}

