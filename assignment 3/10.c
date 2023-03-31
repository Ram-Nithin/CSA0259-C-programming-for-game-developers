#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

void reverse_string(char *str)
{
    char *begin = str;
    char *end = str + strlen(str) - 1;
    while (begin < end) {
        char temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}

int main()
{
    char str[MAX_SIZE];
    printf("Enter a string: ");
    scanf("%s", str);
    reverse_string(str);
    printf("Reversed string: %s\n", str);
    return 0;
}

