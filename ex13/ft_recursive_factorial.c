/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wqarro-v <wqarro-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 17:26:44 by wqarro-v          #+#    #+#             */
/*   Updated: 2018/11/20 18:37:57 by wqarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int		sum;

	sum = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
	{
		sum = nb * ft_recursive_factorial(nb - 1);
		return (sum);
	}
	return (0);
}
