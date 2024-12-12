// #include "get_next_line.h"

// int main()
// {
//   printf("BUFFER_SIZE: %d\n", BUFFER_SIZE);
//   int fd = open("./test.txt", O_RDONLY);
//   char *line;
//   free(NULL);
//   line = get_next_line(fd);
//   while (line)
//   {
//     printf("=============\n");
//     printf("line:[%s]", line);
//     printf("=============\n");
//     free(line);
//     line = get_next_line(fd);
//   }
//   return 0;
// }

#include "get_next_line_bonus.h"
// int main(int ac, char **av)
// {
//     // read from all files that are passed as arguments
//     //int fd;
//     char *line; 
//     int i = 1;
    
//     if (ac == 1)
//     {
//       while ((line = get_next_line(0)))
//       {
//           printf("%s\n", line);
//           free(line);
//       }
//       printf("Done from stdin\n");
//     }

//     // other check for check from file1.txt and file2.txt
//     int fd1 = open(av[i], O_RDONLY);
//     // read one line from file1.txt
//     line = get_next_line(fd1);
//     printf("%s", line);
//     free(line);
//     i++;
//     int fd2 = open(av[i], O_RDONLY);
//     line = get_next_line(fd2);
//     printf("%s", line);
//     free(line);
//     // reade other lines from av[i] av[i + 1]
//     i--;
//     while ((line = get_next_line(fd1)))
//     {
//       printf("%s", line);
//       free(line);
//     }
//     close(fd1);
//     i++;
//     while ((line = get_next_line(fd2)))
//     {
//       printf("%s", line);
//       free(line);
//     }
//     close(fd2);
//     return (ac * 0);
// }

int main(void)
{
    int fd1 = open("test.txt", O_RDONLY);
    int fd2 = open("test2.txt", O_RDONLY);
    int fd3 = open("test3.txt", O_RDONLY);
    char *line;

    if (fd1 < 0 || fd2 < 0 || fd3 < 0)
    {
        perror("Error opening files");
        return (1);
    }

    printf("Reading from file1.txt:\n");
    line = get_next_line(fd1);
    printf("%s", line);
    free(line);

    printf("\nSwitching to file2.txt:\n");
    line = get_next_line(fd2);
    printf("%s", line);
    free(line);

    printf("\nSwitching to file3.txt:\n");
    line = get_next_line(fd3);
    printf("%s", line);
    free(line);

    printf("\nReturning to file1.txt:\n");
    line = get_next_line(fd1);
    printf("%s", line);
    free(line);

    printf("\nReturning to file2.txt:\n");
    line = get_next_line(fd2);
    printf("%s", line);
    free(line);

    close(fd1);
    close(fd2);
    close(fd3);

    return (0);
}
