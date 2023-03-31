#include <stdio.h>

int main() {
   int arr[100], n, i, j, k;

   printf("Enter the number of elements: ");
   scanf("%d", &n);

   printf("Enter %d elements:\n", n);
   for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }

   // Loop through the array and remove any duplicate elements
   for (i = 0; i < n; i++) {
      for (j = i + 1; j < n;) {
         if (arr[j] == arr[i]) {
            // Shift all the elements to the right of j one position to the left
            for (k = j; k < n; k++) {
               arr[k] = arr[k + 1];
            }
            n--; // Decrement the size of the array
         } else {
            j++;
         }
      }
   }

   printf("The array after removing duplicate elements is:\n");
   for (i = 0; i < n; i++) {
      printf("%d ", arr[i]);
   }
   printf("\n");
   return 0;
}

