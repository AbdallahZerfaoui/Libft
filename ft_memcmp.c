/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azerfaou <azerfaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 20:46:16 by azerfaou          #+#    #+#             */
/*   Updated: 2024/10/07 21:03:11 by azerfaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// This function returns integer values in three different cases:

// If the return value < 0, it indicates str1 is less than str2.
// If the return value > 0, it indicates str2 is less than str1.
// If the return value == 0, it represents str1 is equivalent to the str2.

int	ft_memcmp(const void *block1, const void *block2, size_t n)
{
	unsigned char	*mem_block1;
	unsigned char	*mem_block2;

	mem_block1 = (unsigned char *)block1;
	mem_block2 = (unsigned char *)block2;
	while (n--)
	{
		if (*mem_block1 != *mem_block2)
			return (*mem_block1 - *mem_block2);
		mem_block1++;
		mem_block2++;
	}
	return (0);
}
