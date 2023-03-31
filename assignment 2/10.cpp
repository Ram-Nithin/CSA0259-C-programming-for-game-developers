#include <stdio.h>

int minJumps(int arr[], int n) {
   int jumps[n], i, j;

   if (n == 0 || arr[0] == 0) {
      return -1;
   }

   jumps[0] = 0;

   for (i = 1; i < n; i++) {
      jumps[i] = INT_MAX;
      for (j = 0; j < i; j++) {
         if (i <= j + arr[j] && jumps[j] != INT_MAX) {
            jumps[i] = jumps[j] + 1;
            break;
         }
      }
   }

   return (jumps[n - 1] != INT_MAX) ? jumps[n - 1] : -1;
}

int main() {
   int arr[] = {2, 3, 1, 1, 4};
   int n = sizeof(arr) / sizeof(arr[0]);
   printf("Minimum number of jumps to reach the end is %d\n", minJumps(arr, n));
   return 0;
}

