#include <stdio.h>

int main() {
   int arr[100], n, i, max1, max2;

   printf("Enter the number of elements: ");
   scanf("%d", &n);

   printf("Enter %d elements:\n", n);
   for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }

   // Initialize max1 and max2 to the first two elements of the array
   if (arr[0] > arr[1]) {
      max1 = arr[0];
      max2 = arr[1];
   } else {
      max1 = arr[1];
      max2 = arr[0];
   }

   // Loop through the rest of the array and update max1 and max2 as necessary
   for (i = 2; i < n; i++) {
      if (arr[i] > max1) {
         max2 = max1;
         max1 = arr[i];
      } else if (arr[i] > max2) {
         max2 = arr[i];
      }
   }

   printf("The largest two elements in the array are %d and %d\n", max1, max2);
   return 0;
}

