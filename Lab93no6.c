#include <stdio.h>
#include <string.h>

int main() {

    char str[200], remove[50];
    int i, j, k;
    int count;
    int found;

    printf("Enter string: ");
    gets(str);

    printf("Enter characters to remove: ");
    gets(remove);

    for(i=0; remove[i] != '\0'; i++) {

        count = 0;
        found = 0;

        for(j=0; str[j] != '\0'; j++) {

            if(str[j] == remove[i]) {

                found = 1;
                count++;

                for(k=j; str[k] != '\0'; k++) {
                    str[k] = str[k+1];
                }

                j--;
            }
        }

        if(found)
            printf("%c removed %d times\n", remove[i], count);
        else
            printf("%c not found\n", remove[i]);
    }

    printf("Result string: %s\n", str);

    return 0;
}
