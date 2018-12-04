/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wqarro-v <wqarro-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 12:36:02 by wqarro-v          #+#    #+#             */
/*   Updated: 2018/11/22 15:04:38 by wqarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*buff;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(src);
	buff = (char*)malloc(sizeof(buff) * (len + 1));
	while (i < len + 1)
	{
		buff[i] = src[i];
		i++;
	}
	return (buff);
}
