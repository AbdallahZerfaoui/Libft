/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azerfaou <azerfaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 20:46:50 by azerfaou          #+#    #+#             */
/*   Updated: 2024/10/07 21:43:05 by azerfaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthex_fd(unsigned int n, int fd)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
		ft_puthex_fd(n / 16, fd);
	write(fd, base + n % 16, 1);
}
