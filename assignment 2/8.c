#include <stdio.h>
#include <string.h>

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permute(char *str, int l, int r)
{
    if (l == r) {
        printf("%s\n", str);
    } else {
        for (int i = l; i <= r; i++) {
            swap(&str[l], &str[i]);
            permute(str, l + 1, r);
            swap(&str[l], &str[i]);
        }
    }
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    permute(str, 0, len - 1);
    return 0;
}

