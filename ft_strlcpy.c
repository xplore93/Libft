/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 19:18:04 by estina            #+#    #+#             */
/*   Updated: 2019/11/06 20:04:23 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char *aux;
	char *s;

	aux = dst + dstsize;
	s = (char*)src;
	while (*s && dst < aux)
		*dst++ = *s++;
	if (dst < aux)
		*dst = 0;
	else if (dstsize > 0)
		dst[-1] = 0;
	while (*s)
		s++;
	return (s - src);
}
