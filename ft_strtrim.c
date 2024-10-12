/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azerfaou <azerfaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 20:55:11 by azerfaou          #+#    #+#             */
/*   Updated: 2024/10/10 18:50:30 by azerfaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char *ft_strchr(const char *str, int search_chr)
// {
// 	while (*str)
// 	{
// 		if (*str == search_chr)
// 			return ((char *)str);
// 		str++;
// 	}
// 	if (*str == search_chr)
// 		return ((char *)str);
// 	return (NULL);
// }

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*str_result;
// 	size_t	i;

// 	if (!s || start > ft_strlen(s) || len == 0)
// 		return (NULL);
// 	str_result = (char *)malloc(sizeof(char) * (len + 1));
// 	if (!str_result)
// 		return (NULL);
// 	i = 0;
// 	while (i < len && s[start + i])
// 	{
// 		str_result[i] = s[start + i];
// 		i++;
// 	}
// 	str_result[i] = '\0';
// 	return (str_result);
// }
// strtrim removes a set of forbidden characters from the beginning and the end
// of a string.
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_result;
	size_t	i;
	size_t	j;
	size_t	len;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (j > i && ft_strchr(set, s1[j - 1]))
		j--;
	len = j - i;
	str_result = ft_substr(s1, i, len);
	return (str_result);
}
