// #include <fcntl.h>
// #include <unistd.h>
// #include <stdio.h>

// int main()
// {
//     char buf[7];
//     int fd = open("test.txt",O_RDONLY);
//     int red = read(fd , buf, 6);
//     buf[red] = '\0';
//     printf("\e[35m%s\n",buf);

//     int red2 = read(fd , buf, 6);
//     buf[red2] = '\0';
//     printf("\e[35m%s\n",buf);

// }