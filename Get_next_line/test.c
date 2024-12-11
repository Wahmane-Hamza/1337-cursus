#include "get_next_line.h"
int main()
{

    int fd = open("test.txt", O_CREAT | O_RDWR, 0644);
    char *str = get_next_line(fd);
    printf("one : %s",str);
    char *str2 = get_next_line(fd);

    printf("two :%s",str2);
    char *str3 = get_next_line(fd);

    printf("three :%s",str3);

    free(str);
    free(str2);
    free(str3);
}