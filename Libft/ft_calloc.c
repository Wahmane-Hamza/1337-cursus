/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 08:27:13 by hwahmane          #+#    #+#             */
/*   Updated: 2024/10/27 10:34:12 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	*ft_memset(void *str, int c, size_t n)
{
	char			*ptr;
	unsigned char	uc;
	size_t			i;

	if (!str)
		return (NULL);
	ptr = str;
	uc = c;
	i = 0;
	while (i < n)
	{
		ptr[i++] = uc;
	}
	return (str);
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t	sz;
	void	*ptr;

	sz = count * size;
	ptr = malloc(sz);
	if (ptr == NULL)
		return (NULL);
	ft_memset (ptr, 0, sz);
	return (ptr);
}

// int main()
// {
// 	int *ll = (int *)calloc(5,sizeof(int));
// 	int i =0;
// 	while(i < 5)
// 	{
// 		printf("%d",ll[i]);
// 		i++;
// 	}
// 	free(ll);
// }