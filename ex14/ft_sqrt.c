/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wqarro-v <wqarro-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 18:39:00 by wqarro-v          #+#    #+#             */
/*   Updated: 2018/11/20 19:46:48 by wqarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		i;

	i = 0;
	if (nb <= 0)
		return (0);
	else
		while (i * i <= nb)
		{
			if (i * i == nb)
			{
				return (i);
			}
			else if (i * i < nb && (((i + 1) * (i + 1)) > nb))
			{
				return (0);
			}
			else
				i++;
		}
	return (0);
}
