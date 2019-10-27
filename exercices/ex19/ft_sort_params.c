/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:14:23 by bclaudio          #+#    #+#             */
/*   Updated: 2018/11/07 15:31:52 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_print_params(char **array)
{
	int i;

	i = 1;
	while (array[i])
	{
		ft_putstr(array[i++]);
		ft_putchar('\n');
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_sort_params(char **array)
{
	int		i;
	char	*tmp;

	i = 1;
	while (array[i + 1])
	{
		if (ft_strcmp(array[i], array[i + 1]) > 0)
		{
			tmp = array[i + 1];
			array[i + 1] = array[i];
			array[i] = tmp;
			i = 1;
		}
		else
			i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc >= 2)
	{
		ft_sort_params(argv);
		ft_print_params(argv);
	}
	return (0);
}
