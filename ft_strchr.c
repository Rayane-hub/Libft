/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasamad <rasamad@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:03:01 by rasamad           #+#    #+#             */
/*   Updated: 2023/11/21 14:25:06 by rasamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i] != (unsigned char)c && str[i])
		i++;
	if (str[i] == (unsigned char)c)
		return ((char *)str + i);
	else
		return (NULL);
}
