#include <stdio.h>
#include <ctype.h>

int main() {
    char str[21];

    
    scanf("%s", str);

    for (int i = 0; str[i]; i++) {
        if (isupper(str[i])) {
            
            putchar(tolower(str[i]));
        } else if (islower(str[i])) {
           
            putchar(toupper(str[i]));
        } else {
            
            putchar(str[i]);
        }
    }

    return 0;
}
