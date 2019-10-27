/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:34:52 by bclaudio          #+#    #+#             */
/*   Updated: 2018/11/07 14:43:23 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int root;
	int result;

	root = 1;
	if (nb == 1)
		return (1);
	while (root < nb)
	{
		result = root * root;
		if (result == nb)
			return (root);
		root++;
	}
	return (0);
}
