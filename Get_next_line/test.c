#include "get_next_line.h"
int main()
{

    int fd = open("test.txt", O_CREAT | O_RDWR, 0644);
    printf("one : %s \n",get_next_line(fd));
    printf("two :%s",get_next_line(fd));
    printf("three :%s",get_next_line(fd));

}