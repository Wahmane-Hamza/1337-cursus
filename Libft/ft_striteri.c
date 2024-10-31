/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:05:04 by hwahmane          #+#    #+#             */
/*   Updated: 2024/10/30 17:11:27 by hwahmane         ###   ########.fr       */
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

// void fe(unsigned int i,char *s)
// {
//     i = 0;
//     *s = *s + 1;
// }
// int main()
// {
//     char s[] = "abc";
//     ft_striteri(s,fe);
//     printf("%s",s);
// }