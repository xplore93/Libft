/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:45:17 by estina            #+#    #+#             */
/*   Updated: 2019/11/04 15:56:51 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_memcmp(const void *s1, const void *s2, int n)
{
	int i;

	i = 0;
	if ((char*)s1 == 0 || (char*)s2 == 0)
		return (0);
	while (i < n)
	{
		if (((char*)s1)[i] != ((char*)s2)[i])
		{
			return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
		}
		i++;
	}
	return (0);
}
