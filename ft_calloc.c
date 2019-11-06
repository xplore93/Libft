/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 23:40:04 by estina            #+#    #+#             */
/*   Updated: 2019/11/06 15:01:45 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	i;

	if (!count || !size)
		return (NULL);
	p = malloc(count * size);
	i = 0;
	while (i < count)
	{
		((char*)p)[i] = 0;
		i++;
	}
	return (p);
}
