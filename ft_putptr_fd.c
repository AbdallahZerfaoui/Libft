/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azerfaou <azerfaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 20:47:22 by azerfaou          #+#    #+#             */
/*   Updated: 2024/10/07 21:10:37 by azerfaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	display_hex(void *ptr, int fd)
{
	unsigned long long	n;
	char				*base;

	n = (unsigned long long)ptr;
	base = "0123456789abcdef";
	if (n >= 16)
		display_hex((void *)(n / 16), fd);
	write(fd, base + n % 16, 1);
}

void	ft_putptr_fd(void *ptr, int fd)
{
	write(fd, "0x", 2);
	display_hex(ptr, fd);
}
