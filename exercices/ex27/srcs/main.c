/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 12:44:38 by bclaudio          #+#    #+#             */
/*   Updated: 2018/11/07 14:59:09 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int		ft_display_file(char *file)
{
	int		fd;
	int		rd;
	char	buf[BUF_SIZE];

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Opening error.\n");
		return (0);
	}
	while ((rd = read(fd, buf, BUF_SIZE)))
	{
		buf[rd] = '\0';
		ft_putstr(buf);
	}
	close(fd);
	return (1);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("File name missing.\n");
	if (argc > 2)
		ft_putstr("Too many arguments.\n");
	if (argc == 2)
		ft_display_file(argv[1]);
	return (0);
}
