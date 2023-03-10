/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aince <aince@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:23:18 by aince             #+#    #+#             */
/*   Updated: 2023/01/02 13:42:57 by aince            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
// #include <stdio.h>
// void	ft_42(unsigned a, char *b)
// {
// 	*b = ft_toupper(*b);
// }
// int	main()
// {
// 	char str[] = "alperen";
// 	ft_striteri(str, ft_42);
// 	printf("%s", str);
// }
// s stringindeki her karakterin adresine tek tek f fonksiyonu uygulanir.