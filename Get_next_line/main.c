// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    // Write C code here
    char *line;
    char str[] = "hello";
    line = malloc(1);
    line[0] = '\0';
    printf("line len =>%ld\n",strlen(line));
    int i = 0;
    while(str[i])
    {
        line[i] = str[i];
        i++;
    }
    line[i] = '\0';
    printf("%s\n",line);
    printf("line len =>%ld\n",strlen(line));
    free(line);

    return 0;
}