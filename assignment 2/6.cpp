#include <stdio.h>

int main() {
   int arr[100], even[100], odd[100], n, i, j = 0, k = 0;

   printf("Enter the number of elements: ");
   scanf("%d", &n);

   printf("Enter %d elements:\n", n);
   for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }

   // Loop through the array and separate the even and odd elements into two separate arrays
   for (i = 0; i < n; i++) {
      if (arr[i] % 2 == 0) {
         even[j] = arr[i];
         j++;
      } else {
         odd[k] = arr[i];
         k++;
      }
   }

   printf("The even elements in the array are:\n");
   for (i = 0; i < j; i++) {
      printf("%d ", even[i]);
   }
   printf("\n");

   printf("The odd elements in the array are:\n");
   for (i = 0; i < k; i++) {
      printf("%d ", odd[i]);
   }
   printf("\n");

   return 0;
}

