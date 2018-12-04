/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wqarro-v <wqarro-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 09:05:38 by wqarro-v          #+#    #+#             */
/*   Updated: 2018/11/23 16:35:49 by wqarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	int		flag;
	char	*buff;

	flag = 1;
	while (flag)
	{
		flag = 0;
		i = 0;
		while (++i < argc)
		{
			if (i != argc - 1 && ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				buff = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = buff;
				flag = 1;
			}
		}
	}
	while (++flag < argc)
		ft_putstr(argv[flag]);
	return (0);
}
