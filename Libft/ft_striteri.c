/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:05:04 by hwahmane          #+#    #+#             */
/*   Updated: 2024/11/01 20:16:14 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s && f)
	{
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}

void fe(unsigned int i,char *s)
{
    i = 0;
    *s = *s + 1;
}
int main()
{
    char s[] = "aabcdefg";
    ft_striteri(s,fe);
    printf("%s",s);
}