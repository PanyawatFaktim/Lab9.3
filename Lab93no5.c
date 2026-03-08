#include <stdio.h>
#include <ctype.h>

int main() {

    char str[200];
    int i = 0;
    int sum = 0;

    printf("Enter input: ");
    gets(str);

    while(str[i] != '\0'){

        if(isdigit(str[i])){
            sum += str[i] - '0';
        }

        i++;
    }

    printf("Sum of digit char: %d\n", sum);

    return 0;
}
