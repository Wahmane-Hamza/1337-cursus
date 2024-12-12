#include "get_next_line.h"
// int main()
// {

//     int fd = open("test.txt", O_CREAT | O_RDWR, 0644);
//     char *str = get_next_line(fd);
//     printf("one : %s",str);
//     char *str2 = get_next_line(fd);

//     printf("two :%s",str2);
//     char *str3 = get_next_line(fd);

//     printf("three :%s",str3);

//     free(str);
//     free(str2);
//     free(str3);
// }


int main()
{
  printf("BUFFER_SIZE: %d\n", BUFFER_SIZE);
  int fd = open("./test.txt", O_RDONLY);
  char *line;
  free(NULL);
  line = get_next_line(fd);
  while (line)
  {
    printf("=============\n");
    printf("line:[%s]", line);
    printf("=============\n");
    free(line);
    line = get_next_line(fd);
  }
  return 0;
}