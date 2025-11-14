#include <stdio.h>
#include <string.h>

int main() {
    char s[100] = "hello world";  
    char c;                        
    int i, j;

    printf("Chuoi ban dau: %s\n", s);
    printf("Nhap ky tu can xoa: ");
    scanf("%c", &c);

    for (i = 0, j = 0; s[i] != '\0'; i++) {
        if (s[i] != c) {
            s[j] = s[i]; 
            j++;
        }
    }
    s[j] = '\0'; 

    printf("Chuoi sau khi xoa ky tu '%c': %s\n", c, s);

    return 0;
}

