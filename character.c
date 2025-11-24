 #include <stdio.h>
#include <string.h>

int main() {
    char ch[100];
    int i, len;

    printf("Enter a string: ");
gets (ch);
    len = strlen(ch);
    printf("Reversed string: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", ch[i]);
    }

    return 0;
}
