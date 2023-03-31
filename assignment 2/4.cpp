#include <stdio.h>
#include <limits.h>

int main() {
   int arr[100], n, i, max_diff = INT_MIN;

   printf("Enter the number of elements: ");
   scanf("%d", &n);

   printf("Enter %d elements:\n", n);
   for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }

   // Loop through the array and find the maximum difference between any two elements
   for (i = 0; i < n; i++) {
      int j;
      for (j = i + 1; j < n; j++) {
         int diff = arr[j] - arr[i];
         if (diff > max_diff) {
            max_diff = diff;
         }
      }
   }

   printf("The maximum difference between any two elements in the array is %d\n", max_diff);
   return 0;
}

