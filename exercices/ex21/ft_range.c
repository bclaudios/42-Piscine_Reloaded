/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:46:02 by bclaudio          #+#    #+#             */
/*   Updated: 2018/11/07 15:26:55 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *array;
	int len;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	len = max - min;
	if (!(array = (int*)malloc(sizeof(int) * len)))
		return (NULL);
	while (i < len)
		array[i++] = min++;
	return (array);
}
