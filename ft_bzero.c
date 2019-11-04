/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:37:07 by estina            #+#    #+#             */
/*   Updated: 2019/11/04 12:41:24 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, int n)
{
	if (n == 0)
		return ;
	while (n > 0)
	{
		n--;
		((char*)s)[n] = 0;
	}
}