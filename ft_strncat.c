/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 14:52:03 by sprotsen          #+#    #+#             */
/*   Updated: 2016/12/10 12:57:32 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t		i1;
	size_t		i2;

	i1 = ft_strlen(s1);
	i2 = 0;
	while (*s1 != '\0')
		s1++;
	while (i2 < n)
	{
		s1[i2] = s2[i2];
		if (s2[i2] == '\0')
			break ;
		i2++;
	}
	s1[i2] = '\0';
	return (s1 - i1);
}
