#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    int i = 0;
    char str[200], res[200];
    printf("Enter the string: ");
    scanf("%[^\n]s", str);
    printf("%s\n", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i]))
            res[i] = tolower(str[i]);
        else if (islower(str[i]))
            res[i] = toupper(str[i]);
        else
            res[i] = str[i];
    }

    res[i] = '\0';  // Null-terminate the result string

    printf("%s\n", res);
    return 0;
}
