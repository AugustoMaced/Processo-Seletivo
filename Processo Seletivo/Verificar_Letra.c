#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;
    
    printf("Digite uma string: ");
    gets(str);
    
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            count++;
        }
    }
    
    if (count > 0) {
        printf("A letra 'a' aparece %d vezes.\n", count);
    } else {
        printf("A letra 'a' não aparece na string.\n");
    }

    return 0;
}
