/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:36:38 by estina            #+#    #+#             */
/*   Updated: 2019/11/06 16:09:49 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (s && f)
	{
		i = 0;
		str = malloc(ft_strlen(s) * sizeof(str));
		while (s[i])
		{
			str[i] = f(i, s[i]);
			i++;
		}
		str[i] = 0;
		return (str);
	}
	return (NULL);
}
