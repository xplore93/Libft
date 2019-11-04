/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 19:18:04 by estina            #+#    #+#             */
/*   Updated: 2019/11/04 19:29:19 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlcpy(char *dst, const char *src, int dstsize)
{
	char *aux;
	char *s;

	aux = dst + dstsize;
	s = (char*)src;
	while (*s != '\0' && dst < aux)
		*dst++ = *s++;
	if (dst < aux)
		*dst = 0;
	else if (dstsize > 0)
		dst[-1] = 0;
	while (*s != '\0')
		s++;
	return (s - src);
}
