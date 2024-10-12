/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_isalnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azerfaou <azerfaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 20:56:45 by azerfaou          #+#    #+#             */
/*   Updated: 2024/10/07 21:24:29 by azerfaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	str_isalnum(char *str)
{
	if (!str)
		return (0);
	while (*str)
	{
		if (!ft_isalnum(*str) && *str != ' ')
			return (0);
		str++;
	}
	return (1);
}
