/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkholane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:17:51 by nkholane          #+#    #+#             */
/*   Updated: 2019/06/24 10:57:00 by nkholane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	len;
	char	*str;

	start = 0;
	if (!s)
		return (NULL);
	while (((s[start] == ' ') || (s[start] == '\n')
			|| (s[start] == '\t')) && (s[start] != '\0'))
		start++;
	len = ft_strlen(s);
	while (((s[len - 1] == ' ') || (s[len - 1] == '\n')
			|| (s[len - 1] == '\t')) && (s[start] != '\0'))
		len--;
	str = ft_strsub(s, start, len - start);
	if (str)
		return (str);
	return (NULL);
}