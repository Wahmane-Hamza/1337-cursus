#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "../get_next_line_bonus.h"

int main(int argc, char **argv)
{
    int fd;
    int fd2;
    char *line;

    if (argc != 3)
    {
        printf("Usage: %s <file_path>\n", argv[0]);
        return (1);
    }

    // Open the file passed as an argument
    fd = open(argv[1], O_RDONLY);
    if (fd < 0)
    {
        perror("Error opening file");
        return (1);
    }
    fd2 = open(argv[2], O_RDONLY);
    if (fd2 < 0)
    {
        perror("Error opening file");
        return (1);
    }
    line = get_next_line(fd);
    printf("line1 fd1: %s\n",line);

    line = get_next_line(fd2);
    printf("line1 fd2 : %s\n",line);

    printf("Reading lines from: %s\n", argv[1]);
    while ((line = get_next_line(fd)))
    {
        printf("%s", line);
        free(line);
    }

    printf("Reading lines from: %s\n", argv[2]);
    while ((line = get_next_line(fd2)))
    {
        printf("%s", line);
        free(line);
    }
    // Close the file
    close(fd);
    close(fd2);
    printf("\nFinished reading the file.\n");
    return (0);
}
