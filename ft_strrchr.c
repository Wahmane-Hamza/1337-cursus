/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:01:34 by hwahmane          #+#    #+#             */
/*   Updated: 2024/10/25 15:18:10 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	c2;
	int		j;

	if (!s)
		return (NULL);
	j = 0;
	while (s[j])
		j++;
	if (c == '\0')
		return ((char *)&s[j]);
	c2 = c;
	while (j > 0)
	{
		if (s[j - 1] == c2)
			return ((char *)&s[j - 1]);
		j--;
	}
	return (NULL);
}

// int main() {
// 	printf("%s\n",ft_strrchr("Hello world",'o'));
// 	return 0;
// }