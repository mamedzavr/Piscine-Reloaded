/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wqarro-v <wqarro-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 16:46:58 by wqarro-v          #+#    #+#             */
/*   Updated: 2018/11/20 17:29:27 by wqarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		i;
	int		sum;

	i = 1;
	sum = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0 || nb > 12)
		return (0);
	else if (nb > 0 && nb < 13)
	{
		while (i <= nb)
		{
			sum *= i;
			i++;
		}
		return (sum);
	}
	return (0);
}
