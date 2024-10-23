#include <stdio.h>
#include <string.h>

#include <unistd.h>
#include <stdio.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;
	unsigned char *dst2 = (unsigned char*)dst;
	unsigned char *src2 = (unsigned char*)src;

	i = 0;
	while (i < n)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (dst);
}


int main()
{
    char str[] = "abcde";
    char *str2 = str+1;

    printf("%s\n%s", str,str2);
    ft_memcpy(str2, str, 3);
    printf("\n***********\n%s\n%s", str,str2);
}