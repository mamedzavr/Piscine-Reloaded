/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wqarro-v <wqarro-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 17:53:53 by wqarro-v          #+#    #+#             */
/*   Updated: 2018/11/28 17:29:38 by wqarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_display_file(char *str)
{
	char	buff[65534];
	int		mass;

	mass = open(str, O_RDONLY);
	while (read(mass, buff, 1))
		ft_putstr(buff);
	close(mass);
}
