/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:57:59 by estina            #+#    #+#             */
/*   Updated: 2019/11/05 17:07:04 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	num;
	long int	swap;

	num = n;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num *= -1;
	}
	swap = 0;
	while (num >= 10)
	{
		swap = swap * 10 + (num % 10);
		num /= 10;
	}
	swap = swap * 10 + (num % 10);
	while (swap >= 10)
	{
		ft_putchar_fd(48 + swap % 10, fd);
		swap /= 10;
	}
	ft_putchar_fd(48 + swap % 10, fd);
}
