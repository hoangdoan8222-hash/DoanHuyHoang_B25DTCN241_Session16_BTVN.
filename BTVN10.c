#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "bcdac";     
    char chars[100];        
    int counts[100];         
    int len = strlen(s);
    int unique = 0;         
    int i, j;

    for (i = 0; i < len; i++) {
        char c = s[i];
        int found = 0;

        for (j = 0; j < unique; j++) {
            if (chars[j] == c) {
                counts[j]++;  
                found = 1;
                break;
            }
        }

        if (!found) {
            chars[unique] = c;
            counts[unique] = 1;
            unique++;
        }
    }

    for (i = 0; i < unique; i++) {
        printf("%c: %d\n", chars[i], counts[i]);
    }

    return 0;
}

