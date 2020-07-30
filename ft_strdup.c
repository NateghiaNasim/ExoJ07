/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnateghi <nnateghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 15:55:02 by nnateghi          #+#    #+#             */
/*   Updated: 2020/07/30 21:19:28 by nnateghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	ft_strdup(char *src)
{
	char	*str;
	int		str_size;
	int		i;

	i = 0;
	str_size = 0;
	while (src[str_size])
	{
		str_size++;
	}
	str = (char *)malloc(str_size * sizeof(*str) + 1);
	if (!str)
		return (0);
	while (i < str_size)
	{
		str[i] = src[i];
		i++;
	}
	str[str_size] = '\0';
	return (*str);
	free(str);
}
