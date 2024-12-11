#include "get_next_line.h"
int main()
{

    int fd = open("test.txt", O_CREAT | O_RDWR, 0644);
    printf("%s",get_next_line(fd));

}