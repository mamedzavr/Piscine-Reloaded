/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wqarro-v <wqarro-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 15:06:01 by wqarro-v          #+#    #+#             */
/*   Updated: 2018/11/22 15:18:32 by wqarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		range;
	int		i;
	int		*buff;

	i = 0;
	range = max - min;
	if (range <= 0)
		return (NULL);
	buff = (int*)malloc(sizeof(buff) * range);
	while (i < range)
	{
		buff[i] = min + i;
		i++;
	}
	return (buff);
}
