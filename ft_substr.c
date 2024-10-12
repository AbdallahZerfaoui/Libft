/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azerfaou <azerfaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 20:55:25 by azerfaou          #+#    #+#             */
/*   Updated: 2024/10/09 12:20:46 by azerfaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str_result;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (len == 0 || start > s_len)
		return (ft_calloc(1, sizeof(char)));
	if ((start + len) > s_len)
		len = s_len - start;
	if ((start + len) <= s_len)
	{
		str_result = (char *)ft_calloc(len + 1, sizeof(char));
		if (!str_result)
			return (NULL);
		str_result = ft_strncpy(str_result, s + start, len);
	}
	else
		str_result = ft_strdup(s);
	return (str_result);
}

// int main()
// {
// 	printf("case 3 : %s\n", ft_substr("", 0, 1));
// 	printf("case 9 : %s\n", ft_substr("hola", 0, 3));
// }
