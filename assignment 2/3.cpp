#include <stdio.h>

int main() {
   int arr[100], n, i, max1, max2, min1, min2;

   printf("Enter the number of elements: ");
   scanf("%d", &n);

   printf("Enter %d elements:\n", n);
   for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }

   // Initialize max1, max2, min1, and min2 to the first two elements of the array
   if (arr[0] > arr[1]) {
      max1 = arr[0];
      max2 = arr[1];
      min1 = arr[1];
      min2 = arr[0];
   } else {
      max1 = arr[1];
      max2 = arr[0];
      min1 = arr[0];
      min2 = arr[1];
   }

   // Loop through the rest of the array and update max1, max2, min1, and min2 as necessary
   for (i = 2; i < n; i++) {
      if (arr[i] > max1) {
         max2 = max1;
         max1 = arr[i];
      } else if (arr[i] > max2) {
         max2 = arr[i];
      }

      if (arr[i] < min1) {
         min2 = min1;
         min1 = arr[i];
      } else if (arr[i] < min2) {
         min2 = arr[i];
      }
   }

   printf("The second largest element in the array is %d\n", max2);
   printf("The second smallest element in the array is %d\n", min2);
   return 0;
}

