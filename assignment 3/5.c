#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int i, j, freq[MAX_SIZE];
    int max_freq, max_index;

    printf("Enter any string: ");
    fgets(str, MAX_SIZE, stdin);

    for (i = 0; i < strlen(str); i++) {
        freq[i] = 1;
        for (j = i + 1; j < strlen(str); j++) {
            if (str[i] == str[j]) {
                freq[i]++;
            }
        }
    }

    max_freq = freq[0];
    max_index = 0;

    for (i = 1; i < strlen(str); i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            max_index = i;
        }
    }

    printf("The highest frequency character in the string is '%c' appearing %d times.", str[max_index], max_freq);

    return 0;
}

