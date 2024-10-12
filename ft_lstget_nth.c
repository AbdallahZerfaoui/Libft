/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstget_nth.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azerfaou <azerfaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:06:49 by azerfaou          #+#    #+#             */
/*   Updated: 2024/10/08 13:07:56 by azerfaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstget_nth(t_list *lst, int n)
{
	t_list	*result;
	int		length;

	result = lst;
	length = ft_lstsize(lst);
	if (n > length - 1)
		return (NULL);
	while (n > 0)
	{
		result = result->next;
		n--;
	}
	return (result);
}
