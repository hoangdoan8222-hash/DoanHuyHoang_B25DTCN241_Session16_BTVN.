#include <stdio.h>
#include <ctype.h>  

int main() {
    char s[] = "hello world"; 
    int i;

    for (i = 0; s[i] != '\0'; i++) {
        if (i == 0 && isalpha(s[i])) {
            
            s[i] = toupper(s[i]);
        } else if (s[i-1] == ' ' && isalpha(s[i])) {
            
            s[i] = toupper(s[i]);
        }
    }

    printf("%s\n", s);

    return 0;
}

